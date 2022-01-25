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
    int index_minimum_1=0;
    int minimum1=INT_MAX;
    for(int i=0;i<v1.size();i++){
        if(v1[i]<minimum1){
            minimum1=v1[i];
            index_minimum_1=i;
        }
    }
    v1.erase(v1.begin()+index_minimum_1);
    int minimum2=INT_MAX;
    for(int i=0;i<v1.size();i++){
        if(v1[i]<minimum2){
            minimum2=v1[i];
        }
    }
    cout<<minimum1<<" "<<minimum2;


return 0;
}