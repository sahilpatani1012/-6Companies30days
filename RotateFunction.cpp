#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int maxRotateFunction(vector<int> &nums)
{
    int sum = 0,tempans = 0;
    for(int i=0;i<nums.size();i++){
        sum += nums[i];
        tempans += i*nums[i];
    }
    int res = tempans;
    for(int i=nums.size()-1;i>=0;i--){
        tempans += sum - (nums[i]*nums.size());
        res = max(tempans,res);
    }
    return res;
}

int main()
{
    int n;
    vector<int> v;
    while (cin >> n && n != 200)
    {
        v.push_back(n);
    }
    cout<<maxRotateFunction(v)<<endl;
    return 0;
}