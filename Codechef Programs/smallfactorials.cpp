#include<iostream>
using namespace std;
int main()
{
    int t,n,i;
    cin>> t;
    int fact=1;
   while(t--)
    {
        cin>>n;
        
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        
    }
    cout<<fact;
    return 0;
    
}