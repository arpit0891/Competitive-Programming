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
    getline(cin,s2);
    sort(s1.begin(),s1.end());//O(Nlog(N))
    sort(s2.begin(),s2.end());//O(Nlog(N))
    if (s1==s2)//O(N)
       cout<<"YES"<<endl;}
    else{
        cout<<"NO"<<endl;}
    // O(Nlog(N))+O(N) => O(Nlog(N)) 
    return 0;
}