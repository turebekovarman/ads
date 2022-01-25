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
   cout<<"1 num"<<endl;
   cout<<s1.top()<<endl;
   s1.pop();
   cout<<"2 num"<<endl;
   cout<<s1.top()<<endl;
   cout<<"all";
   cout<<s1;
return 0;
}
