#include<iostream>
using namespace std;
int main()
{
    int i ,n;
    cout<<"enter the number of elements of the array\n";
    cin >> n;
    int a[n];
    cout<<"enter the elements of the array\n";
    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "the elements of the given array are \n";
    for ( i = 0; i < n; i++)
    {
        cout << a[i] <<endl ;
    }
    
}  // Nikhil