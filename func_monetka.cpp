#include<iostream>
#include<algorithm>

using namespace std;

void monetka(int coin){
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
}
int main(){
    int coin;
    cin>>coin;
    monetka(coin);
return 0;
}