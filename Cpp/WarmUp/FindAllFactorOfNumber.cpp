#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout << "Enter a number\n";
    cin >> n;
    cout << "Factors of "<< n << " are\n";
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout << i <<"\n";
        }
    }
}