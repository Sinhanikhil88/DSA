#include<iostream>
using namespace std;
int main ()
{
    int i , n;
    cout <<"enter number of elements of array";
    cin >> n;
    int a[n];
    cout << "enter the elements of array";
    for (i=0;i<=n;i++)
    {
         cin >> a[i];
    }
    a[0] = a[(n-1)];
    a[(n-1)] = a[0];
        cout << "the elements of array after swaping \n";
    for (i=0;i<n;i++)
    {
        cout << a[i];
    }
}