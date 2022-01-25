#include<iostream>    //3--> a b c--> cout<<c;
#include<queue>

using namespace std;

int main(){
    int n;
    cin>>n;
    queue<string>q1;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        q1.push(x);
    }
    cout<<q1.back();
return 0;
}