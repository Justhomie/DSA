#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxSubArray(vector<int>& nums) {
        int currSum = 0, maxSum = INT_MIN;
        int n = nums.size();
        for (int i=0; i<n; i++)
        {
            currSum += nums[i];
            maxSum = max(currSum, maxSum);
            if (currSum<0)
            {
                currSum = 0;
            }
        } 
        return maxSum;       
    }
};