#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l;
    cout << "Enter a Number\n";
    cin >> n;
    l = n;
    l = l%10;
    while (n/10!=0){
        n = n/10;
    }
    cout << "First Digit of Given Number\n" << n;
    cout << "\nLast Digit of Given Number\n" << l;

}