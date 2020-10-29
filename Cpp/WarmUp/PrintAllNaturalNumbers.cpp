#include <iostream>
using namespace std;
int main ()
{
    int i,n;
    cout << "Enter the last number that is to be printed\n";
    cin >> n;
    i=1;
    while (i<=n)
    {
        cout << i << "\n";
        i++;
    }
}