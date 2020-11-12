#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cout << "enter a number\n";
    cin >> n;
    for(i=2;i<=(n-1);i++){
        if (n%i!=0) {
            cout << "Number is prime";
       break; 
        }
    else {
        cout << "Number is not prime";
        break; }
} }