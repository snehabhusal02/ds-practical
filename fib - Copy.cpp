#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    return n;
return fib(n-1)+fib(n-2);
}
int main()
{
    int n,i;
    cout<<"enter the number:";
    cin>>n;
    cout<<"fibbonacci series:";
    for(i=0;i<n;i++)
    cout<<fib(i)<<" ";
return 0;
}