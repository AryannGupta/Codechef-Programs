#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int count=0,n, lastd;
        cin>>n;
        while(n>0)
        {
            lastd= n%10;
            if(lastd==4)
             count++;
            n=n/10; //to move to the next left digit

        }
    cout<< count<<endl;
    }

    return 0;

}