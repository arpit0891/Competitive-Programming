#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a;
    int *p;
    a=10;
    p=&a;//&a =address of a
    cout<<a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;// *P => a means *p is equivalent to a
    cout<<"______________________"<<endl;
    *p=334; //de referencing
    cout<<"Derefrencing\n";
    cout<<p<<endl;
    cout<<*p<<endl;//even  after derefrencing addres remains same
    cout<<"______________________"<<endl;
    cout<<"Pointer Arithmetic\n";
    //suppose initially we have addres of p=2002 and we do p+1 then addres of p will not be 2003 it
    //will be 2002+(4)*1 where 4 is size of type int i.e 4 bytes because increment in addres means point to next addres.
    //So generic formula for the pointer increment is P+n= P+(size of varible type)*n
    cout<<"Incemented Pointer: "<<p+1<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}