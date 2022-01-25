#include<iostream>
#include<algorithm>

using namespace std;

string isMonetka(int coin){
    string vyvod=" ";
    if(coin==50){
        vyvod="coca cola";
    }
    else if(coin==100){
        vyvod="sprite";
    }
    else if(coin==150){
        vyvod="kit kat";
    }
    else if(coin==1000){
        vyvod="zhvachka";
    }
    else{
        vyvod="loser";
    }
    return vyvod;
}
int main(){
    int coin;
    cin>>coin;
    cout<<isMonetka(coin);

return 0;
}
