#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int x=5;
    int *p=&x;
    *p=6;
    int **q=&p;
    int ***r=&q;
    cout<<x<<endl;
    cout<<p<<endl; // prints the address of x
    cout<<*q<<endl; //prints value stored in p which s address of x
    cout<<**r<<endl; // *r prints value stored in q which is address of p and **r prints value stored in p which is address of x
    cout<<"+------------------+"<<endl;
    cout<<"Printing Values"<<endl;
    cout<<"+------------------+"<<endl;
    cout<<x<<endl;
    cout<<*p<<endl;
    cout<<*(*q)<<endl;
    cout<<*(*(*r))<<endl;
    return 0;

}