#include<iostream>
using namespace std;
int main()
{
    int i,n,s;
    cout << "Enter first value\n";
    cin >> s;
        
    for (i=1;i<=64;i++)
    {
        s= s*2;
        cout << s << "\n";
    }
}