#include<iostream>   //50->cout->cola 100->sprite

using namespace std;

int main(){
    int coin;
    cin>>coin;
    if(coin==50){
        cout<<"cola";
    }
    else if(coin==100){
        cout<<"sprite";
    }
    else if(coin==150){
        cout<<"kit kat";
    }
    else if(coin==1000){
        cout<<"zhvachka";
    }
    else{
        cout<<"loser";
    }
return 0;
}