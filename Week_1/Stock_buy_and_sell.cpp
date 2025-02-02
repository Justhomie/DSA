#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int less = prices[0];
    int max_profit = 0;
    int n = prices.size();
    for (int i=0; i<n; i++)
    {
        int cost = prices[i] - less;
        max_profit = max(max_profit, cost);
        less = min(less, prices[i]);
    }
    return max_profit;
    }
};
