#include<iostream>
#include<vector>

using namespace std;

int main(){
    string word;
    vector<int>numbers;
    while(word!="exit"){
        cin>>word;
        if(word=="push"){
            int num;
            cin>>num;
            numbers.push_back(num);
            cout<<"ok";
        }
        else if(word=="pop"){
            cout<<numbers.back();
            numbers.pop_back();
        }
        else if(word=="back"){
            cout<<numbers.back();
        }
        else if(word=="size"){
            cout<<numbers.size();
        }
        else if(word=="clear"){
            numbers.clear();
            cout<<"ok";
        }
        else if(word=="exit"){
            cout<<"bye";
            break;
        }
    }
return 0;
}