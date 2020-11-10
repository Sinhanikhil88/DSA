#include<iostream>
using namespace std;
int main()
{
   unsigned long long  i,n,s = 1;
    cout << "Enter first value\n";
    
        
    for (i=1;i<=64;i++)
    {
        s= s*2;
        cout << i << " "<< s  << "\n";
    }
}