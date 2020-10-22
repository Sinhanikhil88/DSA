#include<iostream>
using namespace std;
int main()
{
int i,s,n,a[n];
cout<<"enter the number of elements of array\n";
cin >> n;
cout << "enter the elements of the array";
for(i=0;i<n;i++)
{
cin >> a[i];
}
for(i=0;i<n;i++)
{
    s=s+a[i];
}
cout << s;
return 0;
}