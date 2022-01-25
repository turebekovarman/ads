#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>a;
    vector<int>b;
    for(int i=0;i<v.size();i++){
        if(v[i]%2==0){
            a.push_back(v[i]);
        }
        else if(v[i]%2!=0){
            b.push_back(v[i]);
        }
    }
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    if(a.size()>b.size()){
        cout<<"YES";
    }
    else if(b.size()>a.size()){
        cout<<"NO";
    }
return 0;
}
