#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int>s1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s1.push(x);
    }
    while(s1.empty()!=true){
        cout<<"last element: ";
        cout<<s1.top()<<endl;
        s1.pop();
    }
return 0;
}
