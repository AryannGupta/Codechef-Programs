#include <iostream>
using namespace std;

int main()
{
     int t,n, num, digit, rev = 0;
     cin>>t;
    while(t--){
     cin >> num;

     n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);

     if (n == rev)
         cout <<"wins"<<endl;
     else
         cout <<"loses"<<endl;
    }
    return 0;
}