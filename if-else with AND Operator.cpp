#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Entre the Age:"<<endl;
    cin>>age;
    if (age>=18 && age<120)
    {
        cout<<"You are eligible to Vote"<<endl;
    }
    else
    {
        cout<<"You aren't eligible to Vote";
    }
    
}