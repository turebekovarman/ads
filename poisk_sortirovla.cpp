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
    int chislo;
    cin>>chislo;
    int cnt=0;
    for(int i=0;i<v1.size();i++){
        if(v1[i]==chislo){
            cnt++;
        }
    }
    cout<<cnt;
return 0;
}