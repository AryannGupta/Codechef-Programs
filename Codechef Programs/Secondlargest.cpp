#include<iostream>
using namespace std;
int main()
{
    int t, a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if((a>b)&&(a>c))
        {
            if(b>c)
            {
                cout<< b<<endl;

            }
            else
            cout<< c<<endl;
        }
        else if((b>c)&&(b>a))
        {
            if(a>c)
            {
                cout<<a<<endl;

            }
            else
            cout<<c<<endl;
        }
        else
        {
             if(a>b)
            cout <<a<<endl;
            else 
            cout << b<<endl;
        }

    }
    return 0;
}