#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

string getHint(string secret, string guess)
{
    int bulls=0, cows = 0;
    unordered_map<char,int> m1,m2;
    for (int i = 0; i < secret.length(); i++)
    {
        if (secret[i] == guess[i])
        {
            bulls++;
        }
        else{
        m1[secret[i]]++;
        m2[guess[i]]++;
        }
    }
    for(auto it = m1.begin();it!=m1.end();it++){
        cows += min(it->second,m2[it->first]);
    }
    string res = to_string(bulls) + 'A' + to_string(cows) + 'B';
    return res;
}

int main()
{
    string secret, guess;
    cin >> secret >> guess;
    string s = getHint(secret, guess);
    cout << s << endl;
    return 0;
}