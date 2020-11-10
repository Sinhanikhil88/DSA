#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count;
    cout << "Enter a Number\n";
    cin >> n;
    while(n!=0){
        n = n/10;
        count++;
    }
    cout << "Number of Digits in the given number" << "\n" << count;
}