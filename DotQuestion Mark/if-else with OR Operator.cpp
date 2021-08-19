#include<iostream>
using namespace std;
int main()
{
    char gen;
    cout<<"Are you is a Male:(y/n)"<<endl;
    cin>>gen;
    if (gen=='y' || gen=='Y')
    {
        cout<<"Gender=Male"<<endl;
    }
    else
    {
        cout<<"Gender=Female";
    }
    
}