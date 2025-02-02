#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> repeatedNumber(vector<int>& a) {
    long long n = a.size();
    int xr = 0;
    for (int i=0; i<n; i++)
    {
        xr = xr ^ a[i];
        xr = xr ^ (i+1);
    }
    int bitNo = 0;
    while (1)
    {
        if ((xr&(1<<bitNo))!= 0)
        {
            break;
        }
        bitNo++;
    }
    int zero=0;
    int one=0;
    for (int i=0;i<n;i++)
    {
        if ((a[i]&(1<<bitNo))!=0)
        {
            one = one ^a[i];
        }
        else{
            zero = zero^a[i];
        }
    }
    for (int i=1;i<=n;i++)
    {
        if ((i&(1<<bitNo))!=0)
        {
            one = one ^i;
        }
        else{
            zero = zero^i;
        }
    }

    int cnt = 0;
    for (int i=0; i<n; i++)
    {
        if (a[i]==zero)
            cnt++;
    }
    if (cnt==2)
        return {zero, one};
    return {one,zero};  
}
