#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,n,t,sum = 0;
    cout << "enter a number\n";
    cin >> n;
    t = n;
    while (n/10!=0){
        r = n%10;
        sum = sum*10+ r;
        n = n/10;
    }
    sum = sum*10 + n;
    if (t == sum){
        cout << "Given Number is palindrome";}
        else cout << "Given Number is not palindrome";
    
}