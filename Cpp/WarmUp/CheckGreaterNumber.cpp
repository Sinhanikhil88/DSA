#include <iostream>
using namespace std;
int main ()
{
    int i,j;
    cout << "Enter two numbers that needs to be compare";
    cin >> i >> j;
    switch (i>j)
    {
    case 0:
     cout << j;
        break;
    case 1:
    cout << i;
    
    default:
        break;
    }
}
