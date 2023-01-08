#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int minOperations(vector<int> &nums, vector<int> &numsDivide)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    unordered_set<int> numset(nums.begin(),nums.end());
    for (auto it = numset.begin(); it != numset.end(); it++)
    {
        pq.push(*it);
    }
    unordered_set<int> s(numsDivide.begin(), numsDivide.end());
    int minDivisor;
    while (!pq.empty())
    {
        for (auto it = s.begin(); it != s.end(); it++)
        {
            if (pq.empty())
                return -1;
            if (*it % pq.top() != 0)
            {
                pq.pop();
                it = s.begin();
            }
        }
        minDivisor = pq.top();
        break;
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == minDivisor)
            return i;
    }
    return -1;
}

int main()
{
    int n, m;
    vector<int> v1, v2;
    while (cin >> n && n != -1)
    {
        v1.push_back(n);
    }
    while (cin >> m && m != -1)
    {
        v2.push_back(m);
    }
    cout << minOperations(v1, v2) << endl;
    return 0;
}