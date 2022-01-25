#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v1;
    bool isYES=false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    int chislo;
    cin>>chislo;
    for(int i=0;i<v1.size();i++){
        if(v1[i]==chislo){
            isYES=true;
            break;
        }
    }
    if(isYES==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

return 0;
}