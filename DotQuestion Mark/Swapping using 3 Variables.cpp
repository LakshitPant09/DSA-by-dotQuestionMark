#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num;
    cout<<"Enter a number:";
    cin>>num1;
    cout << "Enter a number:";
    cin >> num2;
    cout<<"Let's swap these numbers now.";
    num=num1;
    num1=num2;
    num2=num;
    cout<<"The Swapped number are here:"<<num1<<" "<<num2;
    return 0;
}