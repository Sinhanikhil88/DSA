#include<iostream>
using namespace std;
int main ()
{
    int i,n;
    cout << "Enter the last number till where we want even number\n";
    cin >> n;
    i =1;
    while (i<=n)
    {
        if (i%2==0) {
        cout << i <<"\n";
        }
        i++;
    

    }
}