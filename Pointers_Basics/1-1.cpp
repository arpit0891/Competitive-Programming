#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
#define FOR(i,n) for(int i=0;i<n;i++)
int main()
{
    string s;
    int flag=0;
    getline(cin,s);
    sort(s.begin(),s.end());
    int n=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<s.size();i++)
    {
        if (s[i]==s[i+1])
        {
            cout<<"Not Unique Elements"<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"Unique Elements"<<endl;
    }
    return 0;
}