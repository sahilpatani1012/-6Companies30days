#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <math.h>
using namespace std;

int evalRPN(vector<string> &tokens)
{
    stack<int> st;
    for(string s: tokens){
        if(s=="+"){
            int n2 = st.top();
            st.pop();
            int n1 = st.top();
            st.pop();
            st.push(n1+n2);
        }
        else if(s=="-"){
            int n2 = st.top();
            st.pop();
            int n1 = st.top();
            st.pop();
            st.push(n1-n2);
        }
        else if(s=="*"){
            int n2 = st.top();
            st.pop();
            int n1 = st.top();
            st.pop();
            st.push(n1*n2);
        }
        else if(s=="/"){
            int n2 = st.top();
            st.pop();
            int n1 = st.top();
            st.pop();
            st.push(floor(n1/n2));
        }
        else{
            st.push(stoi(s));
        }
    }
    return st.top();
}

int main()
{
    string s;
    vector<string> v;
    while (cin >> s && s!="end")
    {
        v.push_back(s);
    }
    cout<<evalRPN(v)<<endl;
    return 0;
}