#include <iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main()
{
    int t, bs;
    float gs;
    cin>> t;
    while(t--)
    {
        cin>> bs;
        cout<<fixed<<setprecision(2);
        if(bs<1500)
        {
            gs =2*bs;
            cout<< gs<<endl;

        }
        else
        {
            gs= bs+0.98*bs+500;
            cout<< gs<<endl;
        }
    }
    return 0;
}