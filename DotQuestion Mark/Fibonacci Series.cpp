#include<iostream>
using namespace std;
int main()
{
    int i,n,next,first=0,second=1;
    cout<<"Enter the count you want to print:";
    cin>>n;
   
    
    for(i=2;i<n;++i)
    {
        next=first+second;
        cout<<next;
        first=second;
        second=next;
    }
    return 0;

}