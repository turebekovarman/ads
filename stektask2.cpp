#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
    int n;
    cout<<"kolichestvo 1 massiva: "<<endl;
    cin>>n;
    int m;
    cout<<"kolichestvo 2 massiva : "<<endl;
    cin>>m;
    vector<int>v1;
    vector<int>v2;
    cout<<"vvedite chisla 1 massiva: "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<"vvedite chisla 2 massiva: "<<endl;
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        v2.push_back(y);      //top1    top2    -----> min ----->v3
    }
    vector<int>v3;
    for(int i=v1.size()-1;i>=0;i--){
        if(v1[i]<v2[i]){
            v3.push_back(v1[i]);
        }
        else{
            v3.push_back(v2[i]);
        }
    }
    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }


return 0;
}
