#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i,s,d,f;
    cout << "enter a even number for no of elements\n";
    cin >> n;
    if (n%2==0)
    {
        int a[n];
        cout <<"enter the elements of array\n";
        for ( i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        for ( i = 0; i < (n/2); i++)
        {
            s=s+a[i];
        }
        cout << s;
        for ( i = (n/2); i < n; i++)
        {
            d=d+a[i];
        }
        f = abs(s-d);
     cout << "To balance the array we can add\n"<< f;
    }
    else
    {
        cout <<"the value enter for array lenght is not even number\n";
    }
    
    
}

