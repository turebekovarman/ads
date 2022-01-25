#include<iostream>
#include<vector>
#include<stack>

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
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(v[i]>max){
            max=v[i];
        }
        if(v[i]<min){
            min=v[i];
        }
    }
    for(int i=0;i<v.size();i++){
        cout<<"min: "<<min<<endl;
        cout<<"max: "<<max<<endl;
        break;
    }
}