#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
    int a=1025;
    int *p;
    p=&a;
    cout<<"size of integer is: "<<sizeof(int)<<endl;
    cout<<"Address: "<<p<<" Value: "<<*p<<endl;
    cout<<"Address P+1: "<<p+1<<" Value P+1: "<<*(p+1)<<endl;

    char *p0;
    p0=(char*)p; //typecasting of pointer variable
    cout<<"size of Char is: "<<sizeof(char)<<endl;
    cout<<"Address: "<<p0<<" Value: "<<*p0<<endl;
    cout<<"Address P0+1: "<<p0+1<<" Value P0+1: "<<*(p0+1)<<endl;
    
    cout<<"Void Pointer"<<endl;
    void *p1;
    p1=p;
    cout<<"Pointer Address: "<<p<<endl;
    
    return 0;
}