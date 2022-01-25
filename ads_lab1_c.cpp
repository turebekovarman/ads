#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>d1;
    string s1;
    while(s1!="exit"){
        cin>>s1;
        if(s1=="push_back"){
            int x;
            cin>>x;
            d1.push_back(x);
            cout<<"ok"<<endl;
        }
        else if(s1=="push_front"){
            int x;
            cin>>x;
            d1.push_front(x);
            cout<<"ok"<<endl;
        }
        else if(s1=="pop_front"){
            if(d1.empty()==true){
                cout<<"error"<<endl;
            }
            else{
                d1.pop_front();
                cout<<d1.front();
                
            }
            
        }
        else if(s1=="pop_back"){
            if(d1.empty()==true){
                cout<<"error"<<endl;
            }
            else{
                d1.pop_back();
                cout<<d1.back();
                
        }
    }
        else if(s1=="front"){
            if(d1.empty()==true){
                cout<<"error"<<endl;
            }
            else{
                cout<<d1.front();
            }
            
        }
        else if(s1=="back"){
            if(d1.empty()==true){
                cout<<"error"<<endl;
            }
            else{
                cout<<d1.back();

            }
        }
        else if(s1=="size"){
            cout<<d1.size();
        }
        else if(s1=="clear"){
            d1.clear();
            cout<<"ok"<<endl;
        }
        else if(s1=="exit"){
            cout<<"bye"<<endl;
            break;
        }
    
    }
return 0;

}