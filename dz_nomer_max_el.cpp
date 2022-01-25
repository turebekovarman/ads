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
    int index=0;                       // 5 11 8
    for(int i=0;i<v1.size();i++){     //5>max max=5 index=0;
        if(v1[i]>max){                // 11>5  max=11 index=1;
            max=v1[i];                //8>11 max =11  index 1;
            index=i+1;
        }
    }
    cout<<index;
return 0;
}