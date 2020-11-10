#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int arr[n] = {1,2,3,4,3,4,3};
    int i,j;
    for(i=0;i<n;i++)
    {
        for (j=(i+1);j<=n-1;j++)
        {
            
            if (arr[i] == arr[j])
            {
                cout << (i+1) << "\n";
                return 0;
            }
        }
    }
    return 0;
}