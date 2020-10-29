#include <iostream>
using namespace std;
int main ()
{
    int i ,a,b,c;
    cout << "enter first number that need to be operated\n";
    cin >> a;
    cout << "enter the second number \n";
    cin >> b;
    cout << "enter 1 for '+',2 for '-',3 for '*' and 4 for '/'\n";
    cin >> i;
    switch (i)
    {
        case 1:
        c= a+b;
        cout << c;
        break;
        case 2:
        c=a-b;
        cout << c;
        break;
        case 3:
        c = a*b;
        cout << c;
        break;
        case 4:
        c = a/b;
        cout << c;
        break; 
        
    }
}