#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,l,f,sum;
    cout << "Enter a Number\n";
    cin >> n;
    l = n;
    l = l%10;
    while (n/10!=0){
        n = n/10;
    }
    f = n;
    cout << "After Swapping ";
    cout << "First digit " << l;
    cout << "\nLast Digit " << f;
}