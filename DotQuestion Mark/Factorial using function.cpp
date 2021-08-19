#include<iostream>
using namespace std;
int fun(int);
int main()
{
    int num, fact=1;
    cout << "Enter a number:";
    cin>>num;
    cout<<fun(num);
    return 0;
}
int fun(int n)
{
    int result=1,i;
    for ( i = 1; i <=n; i++)
        result=result*i;
    
    return (result);
    
}


