#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cout<<"Enter a positive integer:";
    cin>>n;
    for ( i = 2; i <=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        else
        {
            if (flag==0)
                cout<<n<<"is a prime number";
            else
            cout<<n<<"Is not a prime number";
            
        }
        return 0;
    }
    
}