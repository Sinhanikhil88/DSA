#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,n;
    cout << "Enter a number\n";
    cin >> n;
    while(n/10!=0){
        l = n%10;
        cout << l;
        n = n/10;
    }
    cout << n;
}