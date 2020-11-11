#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,l,sum =1;
    cout << " Enter a Number\n";
    cin >> n;
    while (n/10!=0){
        l = n%10; 
        sum = sum * l;                                                  
       n = n /10;                                                       
    }
    sum = sum * n;
    cout << sum;
}