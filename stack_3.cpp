#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);

    }
    cout<<"elements";
    while(v1.empty()==false){
        cout<<v1.back()<<endl;
        v1.pop_back();
    }
    cout<<v1.size();
return 0;
}