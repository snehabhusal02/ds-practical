#include<iostream>
using namespace std;
long long factorial(int n)
{
    if(n<=1)
    return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"enter a number:";
    cin>>n;
    cout<<"factorial="<<factorial(n);
    return 0;
}







  

































