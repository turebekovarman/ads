#include<iostream>
#include<queue>

using namespace std;

int main(){
    string word;
    queue<int>q1;
    while(word!="exit"){
        cin>>word;
        if(word=="push"){
            int num;
            cin>>num;
            q1.push(num);
            cout<<"ok";
        }
        else if(word=="pop"){
            if(q1.size()!=0){
                cout<<q1.front();
                q1.pop();
            }
            else{
                cout<<"error";
            }
           
        }
        else if(word=="front"){
            if(q1.size()!=0){
                cout<<q1.front();
            }
            else{
                cout<<"error";
            }
            
        }
        else if(word=="size"){
            cout<<q1.size();
        }
        else if(word=="clear"){
            while(q1.size()!=0){
                q1.pop();
            }
            cout<<"ok";
        }
        else if(word=="exit"){
            cout<<"bye";
            break;
        }
    }
}