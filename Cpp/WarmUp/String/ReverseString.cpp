#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cout << "Enter size of input\n";
    cin >> n;
    n= n+1;
    char s[n];
    s[n] = '\0';
    cout << "Enter the character\n";
    for (i=1;i<=(n-1);i++)
    {
        cin >> s[i];
    }
    for (i=(n-1);i>=1;i--)
    {
        cout << s[i];
    }
}