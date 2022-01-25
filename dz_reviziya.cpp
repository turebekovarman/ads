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
    int min=INT_MAX;
    vector<int>v2;
    vector<int>last;
    for(int i=0;i<v1.size();i++){
        if(min>v1[i]){
            min=v1[i];
            last.push_back(min);

        }
    }
    v2.push_back(v1);
    v2.pop(min);
    for(int i=0;i<v2.size();i++){
        if(min>v2[i]){
            min=v2[i];
            last.push_back(min);
        }
    }

    
    cout<<last;
return 0;
}