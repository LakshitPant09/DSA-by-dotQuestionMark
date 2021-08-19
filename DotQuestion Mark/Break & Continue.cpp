#include<iostream>
using namespace std;
int main()
{
    int t;
    while (t--)
    {
        int num;
        cout << "Enter a number(<=100) to find its square:" << endl;
        cout << "Press 0 to Exit." << endl;
        cin >> num;
        if (num == 0)
        {
            cout << "Program End";
            break;
        }
        else if (num > 100)
        {
            cout<<"You have entered number greater than 100. Try Again"<<endl;
            continue;
        }
        cout<<"The Square of the number is"<<" "<<num*num<<endl;
    }

}