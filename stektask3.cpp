#include<iostream>
#include<stack>

using namespace std;

int main(){
    int n;
    cin>>n;
    stack<int>s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    int min=INT_MAX;
    int i=0;
    int i_min=0;
while(s.empty()!=true){
    if(min>s.top()){
        min=s.top();
        i_min=i;
    }
    i++;
    s.pop();
}
cout<<"............................................................"<<endl;
cout<<i_min<<endl;

return 0;
}