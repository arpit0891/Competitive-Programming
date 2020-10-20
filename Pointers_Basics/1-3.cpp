#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
    string s1;
    string s2;
    getline(cin,s1);
    // sort(s1.begin(),s1.end());
    for(int i=0;i<s1.size();i++)
    {
        if (&s1[i]==" ")
        {
            &s1[i]="%20";
        }
        cout<<s1[i];
    }

    return 0;
}