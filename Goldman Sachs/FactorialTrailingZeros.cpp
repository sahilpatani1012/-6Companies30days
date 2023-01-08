#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int trailingZeroes(int n)
{
    if (n == 0)
        return 0;
    return n / 5 + trailingZeroes(n / 5);
}

int main()
{
    int n;
    cin>>n;
    cout<<trailingZeroes(n)<<endl;
    return 0;
}