#include<iostream>
#include<stdlib.h>
using namespace std;
void Increment_without_Pointer(int a)
{
    a=a+=1;
}
void Increment_with_Pointer(int *a)
{
    *a=*a+=1;
}
int main()
{
    cout<<"Call By Reference"<<"\n+----------------------------+\n";
    int a=4;
    Increment_without_Pointer(a);
    cout<<"Increment_without_Pointer: "<<a<<endl;
    Increment_with_Pointer(&a);
    cout<<"Increment_with_Pointer: "<<a<<endl;
    return 0;


}