#include<iostream>
using namespace std;
int main ()
{
    int i,n,s1,s2,p;
    cout << " enter the elements of array (need to be a even)\n";
    cin >> n;
    if (n%2==0)
    {
    int a[n];
    cout << "enter the elements of array\n";
    
    for (i=0;i<n;i++)
    {
        cin >> a[i];
    }

for(i=0;i < (n/2);i++)
{
    s1 = s1 + a[i];
}
for ( i = (n/2); i < n; i++)
{
    s2 = s2 + a[i];
}
p = s1 * s2;
cout << "the product of both sub array\n"<< p;
 }
 else
 {
     cout << "invaid input ,number of array is not even";
 }
 
}