#include <iostream>
using namespace std;
int main ()
{
    int i;
    cout << "enter a number \n";
    cin >> i;
    switch (i%2==0)
    {
        case 0:
        cout << "It is an odd number\n";
        break;
        case 1:
        cout << " It is an even number\n";
        break;
    }
}