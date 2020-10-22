#include<iostream>
using namespace std;
int main()
{
    int i,n,s=0;
    cout << "enter number of elements of array ";
    cin >> n;
   int a[n];

    cout << "enter the elements of array";
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
     s=s+a[i];
    
    }
    if (s % 2==0)
    {
        cout <<"add 2";
    }
    else
    {
        cout <<"add 1";
    }
 return 0;
    
}