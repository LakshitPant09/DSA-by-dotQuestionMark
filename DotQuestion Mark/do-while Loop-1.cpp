#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    
    do
    {
        cout << "Enter Numbers to get the sum:";
        cin >> num;
        sum +=num;
    } 
    while (num!=0);
    
        cout<<sum;
    
    return 0;
    
}