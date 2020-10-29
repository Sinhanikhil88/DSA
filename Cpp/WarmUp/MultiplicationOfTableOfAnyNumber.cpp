#include<iostream>
using namespace std;
int main()
{
    int i,a,n;
    cout << "Enter a number whose muntiple table we want\n";
    cin >> n;
    for(i=0;i<=10;i++)
    {
        a=n*i;
        cout << a << endl;
    }
}