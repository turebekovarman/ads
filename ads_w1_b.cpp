#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int>s1;
    string name;
    while(name!="exit"){
        cin>>name;
        if(name=="push"){
            int n;
            cin>>n;
            s1.push(n);
            cout<<"ok";
            
        }
        else if(name=="pop"){
            if(s1.size()>0){
                cout<<s1.top();
                s1.pop();

            }
            else{
                cout<<"error";
            }
        }
        else if(name=="back"){
            if(s1.size()>0){
                cout<<s1.top();
            }
            else{
                cout<<"error";
            }
        }
        else if(name=="size"){
            cout<<s1.size();
        }
        else if(name=="clear"){
            while(s1.empty()!=true){
                s1.pop();
            }
            cout<<"ok";
        }
        else if(name=="exit"){
            cout<<"bye";
            break;
        }

    }
return 0;
}