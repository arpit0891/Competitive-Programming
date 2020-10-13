#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    cout<<"Arrays"<<"\n+----------------------------+\n";
    int a[5]={1,5,2,3,6};
    for(auto s:a){
        cout<<s<<" ";
    }
    cout<<"Pointers and Arrays"<<"\n+----------------------------+\n";
    int *p;
    p=a;
    cout<<"Address of a => "<<a<<" | "<<"Address of p =>"<<p<<endl;
    cout<<"a+1 => "<<a+1<<" | "<<"*(a+1) =>"<<*(a+1)<<endl;
    int i=0;
        for(auto s:a){
            
        cout<<*(a+i)<<" ";
        i++;
    }
    return 0;


}