#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout << "enter the size of array\n";
    cin >> n;
    int a[n];
    cout << "enter the elements of the array \n";
    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (a[0]<a[i])
        {
            a[0] =a[i];
        }
         
    }
    cout << "the largest candle length \n "<< a[0];
    cout << "\nthe room will be illumunaed for  "<< a[0]<<"days";
    
    
}