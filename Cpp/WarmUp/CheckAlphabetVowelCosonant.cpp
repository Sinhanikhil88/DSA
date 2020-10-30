#include <iostream>
using namespace std;
int main()
{
    char i;
    cout << "Enter an alphabet\n";
    cin >> i;
    switch (i)
    {
    case 'a':
        cout << "It is a vowel";
        break;
    case 'e':
        cout << "It is a vowel";
        break;
    case 'i':
        cout << "It is a vowel";
        break;
    case 'o':
        cout << "It is a vowel";
        break;
    case 'u':
        cout << "It is a vowel";
        break;

    default:
        cout << "It is a consonant";
        break;
    }
}