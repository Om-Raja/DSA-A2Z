// Max points you can obtain from cards. Given K is number of cards you can choose. Condition is you can take element from start or end only but all the K cards should be consecutive.
#include <iostream>
#include <vector>
using namespace std;

int maxPoints(vector<int> &nums, int k){
    int leftSum = 0;
    int rightSum = 0;
    int maxSum = 0;

    for(int i = 0; i < k; i++){
        leftSum += nums[i];
    }
    maxSum = leftSum;

    int rightIndex = nums.size() - 1;
    for(int i = k - 1; i >= 0; i--){
        leftSum -= nums[i];
        rightSum += nums[rightIndex];
        rightIndex--;

        maxSum = max(maxSum, leftSum + rightSum);
    }

    return maxSum;
}
int main()
{
    vector <int> nums = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int maxSum = maxPoints(nums, 4);
    cout << "MaxSum is " << maxSum;

    return 0;
}

// TC = O(2K) --> two loops which runs for K iterations
// SC = O(1)