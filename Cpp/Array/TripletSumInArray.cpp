#include <iostream>
using namespace std;
int main ()
{
    int s,i,j,k,n;
    cout << "enter the sum \n";
    cin >> s;
    cout << "enter number of elements of array\n";
    cin >> n;
    int a[n];
    cout <<"enter the elements of array \n";
  for (i=0;i<n;i++)
  {
      cin >> a[i];
  }
  for (i=0;i<n;i++)
  {
      for (j= (i+1);j<n;j++)
      {
          for (k=(j+1);k<n;k++)
          {
              if (s == a[i]+a[j]+a[k])
              {
                cout << "the triplet of the array that gives the sum is\n" << a[i] << a[j] << a[k];
              }
          }
      }
  }


}