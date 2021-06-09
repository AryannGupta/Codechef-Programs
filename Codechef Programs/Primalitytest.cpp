#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n, i;
        cin>> n;
        for(i=2; i<=n/2; ++i)
        {
            if(n%i==0)
            {
              cout<<"no\n";
              break;
            }
            else
            cout<<"yes\n";
            break;

        }
    }
    return 0;
}