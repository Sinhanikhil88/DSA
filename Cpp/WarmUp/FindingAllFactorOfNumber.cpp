#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cout << "Enter a number\n";
    cin >> n;
    cout << "Factors for the given number\n";
    for (i=1;i<=n;i++){
        if(n%i==0){
            cout << i <<endl;
        }
        
    }
}