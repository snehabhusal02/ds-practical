#include<iostream>
using namespace std;
class student{
    private:
    int rollno;
    char name[15];
    float marks;
    public:
    void getdata()
    {
    cout<<"enter student roll no";
    cin>>rollno;
    cout<<"enter student name";
    cin>>name;
    cout<<"enter student marks";
    cin>>marks;
    }
    void display()
    {
        cout<<"\nstudent  roll no"<<rollno;
        cout<<"\nstudent name"<<name;
        cout<<"\nstudent marks"<<marks<<endl;
    }
    void compare(student s)
    {
        if(marks>s.marks)
        {
            cout<<name<<"\nhas more marks"<<endl;
        }
        if(marks<s.marks)
        {
            cout<<s.name<<"\nhas more marks"<<endl;
        }
        else
        cout<<"\nboth student has equal marks";
    }
};
int main()
{
student s1,s2;
cout<<"\ndetails of 1st student";
s1.getdata();
cout<<"\ndetails of 2nd student";
s2.getdata();
cout<<"*****************************display datails*********************************";
s1.display();
s2.display();
cout<<"--------------------------------compare marks----------------------------\n";
s1.compare(s2);
return 0;
}