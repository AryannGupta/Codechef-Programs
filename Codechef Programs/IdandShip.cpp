#include<iostream>
using namespace std;
int main(){
   int T;
   cin>>T;
     while(T--){ 
    char character;
    cin>>character;
    if (character == 'B' || character =='b'){
        cout<<"Battleship";
    }
    else if (character == 'C' || character == 'c'){
        cout<<"Cruiser";
}
    else if (character == 'D' || character == 'd'){
        cout<<"Destroyer";
    }
    else if(character == 'F' || character == 'f'){
        cout<<"Frigate";
    }
    else{
        return;
    }    
    cout<<endl;
     }
    return 0;
}