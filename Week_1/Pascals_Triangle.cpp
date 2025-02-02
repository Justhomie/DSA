#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> row;
        row.push_back({1});

        for(int i=0;i<numRows-1;i++)
        {
            vector<int> flag;
            for(int j=0; j<row[i].size(); j++)
            {
                if(j==0)
                    flag.push_back(row[i][j]);
                if(j+1<row[i].size()){
                    int sum = row[i][j]+row[i][j+1];
                    flag.push_back(sum);
                }
                if(j==row[i].size()-1)
                    flag.push_back(row[i][j]);
            }
            row.push_back(flag);
        }
        return row;
    }
};