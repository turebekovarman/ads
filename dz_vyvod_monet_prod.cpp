#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>v1;
    string word;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
    if(x==100){
        word="sprite";
        v1.push_back(word);
    }
    else if(x==50){
        word="cola";
        v1.push_back(word);
    }
    else if(x==150){
        word="kitkat";
        v1.push_back(word);
    }
    else if(x==100){
        word="sprite";
        v1.push_back(word);
    }
    else if(x==10){
        word="looser";
        v1.push_back(word);
    }
}
   for(int i=0;i<v1.size();i++){
       cout<<v1[i]<<" ";
   }
return 0;
}