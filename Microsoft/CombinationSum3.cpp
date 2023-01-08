#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

void solve(vector<vector<int>> res,vector<int> combination,int k,int n,int start){
    if(k == 0 && n == 0) res.push_back(combination);
    if(start>9) return;
    combination.push_back(start);
    solve(res,combination,k-1,n-start,start+1);
    combination.pop_back();
    solve(res,combination,k,n,start+1); 
}

vector<vector<int>> combinationSum3(int k, int n)
{
    vector<vector<int>> res;
    int minSum = 0;
    for(int i=1;i<=k;i++){
        minSum += i;
    }
    if(minSum>n) return res;
    vector<int> combination;
    solve(res,combination,k,n,1);
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> v = combinationSum3(k,n);
    for(vector<int> v1:v){
        for(int x:v1){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}