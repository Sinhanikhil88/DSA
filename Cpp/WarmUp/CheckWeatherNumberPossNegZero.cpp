#include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "enter an integer\n";
    cin >> i;
    switch (i > 0)
    {
    case 1:
        cout << "Entered number is possitive";
        break;
    case 0:
    {
        switch (i < 0)
        {
        case 1:
            cout << "entered value is negative";
            break;
        case 0:
            cout << "Entered values is zero";
            break;
        }
    }
    break;
    }
}