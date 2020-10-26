#include<iostream>
using namespace std;
int main()
{
 int i,n,s,m;
 cout << "enter the number of eements of array\n";
cin >> n;
int a[n];
cout << "enter the elements of array\n";
for ( i = 0; i < n; i++)
{
    cin >> a[i];
}
for ( i = 0; i < n; i++)
{
    s = s + a[i];
}
m = s / n ;
cout << "mean of the elements of array is\n" << m;

}