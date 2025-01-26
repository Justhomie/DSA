#include <vector>
#include<iostream>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& arr) {
        int c0 = 0; 
        int c1 = 0; 
        int c2 = arr.size() - 1;
        while (c1 <= c2)
        {
            if (arr[c1] == 0)
            {
                swap (arr[c0],arr[c1]);
                c0++;
                c1++;
            }
            else if (arr[c1] == 1)
            {
                c1++;
            }
            else {
                swap(arr[c1], arr[c2]);
                c2--;
            }
        }
    }
};