#include<iostream>
#include<queue>
#include<vector>

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
            cout<<q1.front();
            q1.pop();
        }
        else if(word=="front"){
            cout<<q1.front();
        }
        else if(word=="size"){
            cout<<q1.size();
        }
        else if(word=="clear"){    
            while(q1.empty()!=true){
                q1.pop();
            }
            cout<<"ok";
        }
        else if(word=="exit"){
            cout<<"bye";
            break;
        }
    }
return 0;
}