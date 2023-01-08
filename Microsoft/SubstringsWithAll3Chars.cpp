#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int numberOfSubstrings(string s)
{
    int i = 0, j = 0;
    int res = 0;
    int n = s.length();
    unordered_map<char, int> m;
    for(;j<n;j++)
    {
        m[s[j]]++;
        while(m['a'] and m['b'] and m['c']){
            m[s[i]]--;
            i++;
        }
        res += i;
    }
    return res;
}

int main()
{
    
    return 0;
}