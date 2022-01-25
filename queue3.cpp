#include<iostream>       //5 ->  сохранить в queue -> найти длину queue 
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
    int index=0;
    while(q1.empty()!=true){
        cout<<index<<"|"<<q1.front()<<endl;
        q1.pop();
        index++;

    }
return 0;
}