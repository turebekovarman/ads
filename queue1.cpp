#include<iostream>
#include<queue>

using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int>q1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q1.push(x);
    }
    while(q1.empty()!=true){
        cout<<q1.front()<<" "<<"last: ";
        cout<<q1.back()<<endl;
        q1.pop();
    }
return 0;
}