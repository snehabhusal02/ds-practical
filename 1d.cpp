#include<iostream>
using namespace std;
int main()
{
    int a[20]={10,20,30,40,50};
    int n=5,pos,value,i;
    cout<<"given array is";
    for(i=0;i<n;i++)
    {cin>>a[i];}
    //insertion
    cout<<"\nenter the position where u want to insert an array";
    cin>>pos;
    cout<<"\nenter the value i want to inserted";
    cin>>value;
    for(i=n;i>=pos;i--)
    a[i]=a[i-1];
    a[pos-1]=value;
    n++;
    for(i=0;i<n;i++)
    cout<<a[i];
   //deletion
   cout<<"\nenter the position to delete";
   cin>>pos;
   for(i=pos-1;i<n-1;i++)
   a[i]=a[i+1];
n--;
for(i=0;i<n;i++)
cout<<a[i];

//search
cout<<"enter the value to be search";
cin>>value;
int found=-1;
for(i=0;i<n;i++)
{
    if(a[i]==value)
      {
      found=i;
       break;
    }
}
if(found!=-1)
{
cout<<"element can be found at position"<<found+1;
}
else
{cout<<"element not found";
}
//update 
cout<<"enter position to update";
cin>>pos;
cout<<"enter the value";
cin>>value;
a[pos-1]=value;
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}