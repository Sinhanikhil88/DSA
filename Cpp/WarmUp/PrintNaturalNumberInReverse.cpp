#include <iostream>
using namespace std;
int main ()
{
    int i,n;
    cout << "Enter the last number that is to be printed\n";
    cin >> n;
    i=n;
    while (i>=1)
    {
        cout << i << "\n";
        i--;
    }
}