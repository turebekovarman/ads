#include<iostream>
#include<vector>

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
    int max=INT_MIN;
    for(int i=0;i<v1.size();i++){
        if(v1[i]>max){
            max=v1[i];
        }
    }
    cout<<max;
return 0;
}