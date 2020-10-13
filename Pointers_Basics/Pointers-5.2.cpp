#include<iostream>
#include<stdlib.h>
using namespace std;
int sum(int a[])
{
    int tot=0;
    int size=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<size;i++)
    {
        tot+=a[i];
    }
    return tot;
}
int sum_size(int a[],int len)
{
    int tot=0;
    for(int i=0;i<len;i++)
    {
        tot+=a[i];
    }
    return tot;
}
int sum_pointer1(int *a)
{
    int tot=0;
    int size=sizeof(a)/sizeof(a[0]);
    cout<<"Size:"<<size<<endl;
    for(int i=0;i<size;i++)
    {
        tot+=*(a+i);
    }
    return tot;

}
int sum_pointer2(int *a,int size)
{
    int tot=0;
    cout<<"Size:"<<size<<endl;
    for(int i=0;i<size;i++)
    {
        tot+=*(a+i);
    }
    return tot;

}
int main()
{
    cout<<"Array"<<endl;
    cout<<"+----------------------------+"<<endl;
    int a[5]={1,5,2,3,6};
    for(auto s:a){
        cout<<s<<" ";
    }
    cout<<"Arrays as Function Argument"<<endl;
    cout<<"+----------------------------+"<<endl;
    //here we will pass array and its size and se how total sum is appeared on console
    int len=sizeof(a)/sizeof(a[0]);
    cout<<"SUM-1: "<<sum_size(a,len)<<endl;
    cout<<"+----------------------------+"<<endl;
    //here we will just pass array and we will use size inside the sum functin
    cout<<"SUM-2: "<<sum(a)<<endl;
    cout<<"+----------------------------+"<<endl;

    cout<<"SUM-3: "<<sum_pointer1(a)<<endl; //we need to pass size of array in order to iterate over array
    cout<<"SUM-4: "<<sum_pointer2(a,len);
    return 0;


}