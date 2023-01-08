#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int distance(vector<int> p1, vector<int> p2)
{
    int diff1 = pow(p1[0] - p2[0], 2);
    int diff2 = pow(p1[1] - p2[1], 2);
    int distance = (diff1 + diff2);
    return distance;
}

bool validSquare(vector<int> &p1, vector<int> &p2, vector<int> &p3, vector<int> &p4)
{
    
    unordered_map<int, int> m;
    int d12, d13, d14, d23, d24, d34;
    d12 = distance(p1, p2);
    d13 = distance(p1, p3);
    d14 = distance(p1, p4);
    d23 = distance(p2, p3);
    d24 = distance(p2, p4);
    d34 = distance(p3, p4);
    m[d12]++;
    m[d13]++;
    m[d14]++;
    m[d23]++;
    m[d24]++;
    m[d34]++;
    if (m.size() != 2)
    {
        cout<<"Size false";
        return false;
    }
    for (auto it = m.begin(); it != m.end(); it++)
    {
        if(it->first == 0) return false;
        if (it->second == 4 || it->second == 2)
            return true;
        else{
            cout<<"Freq false";
            return false;
        }
    }
    cout<<"End false";
    return false;
}

int main()
{
    int n;
    vector<int> p1, p2, p3, p4;
    for (int i = 0; i < 2; i++)
    {
        cin >> n;
        p1.push_back(n);
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> n;
        p2.push_back(n);
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> n;
        p3.push_back(n);
    }
    for (int i = 0; i < 2; i++)
    {
        cin >> n;
        p4.push_back(n);
    }
    cout << validSquare(p1, p2, p3, p4);
    return 0;
}