#include<iostream>
// n = 5;    [1,2,3,4,5]     m=3  [2,3,4]        if v2[2]==v1[2]
//10no  2 3 4yes
//yes yes no
#include<vector>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0;i<m;i++){
        int y;
        cin>>y;
        v2.push_back(y);
    }
    for(int i=0;i<v2.size();i++){        // 0 1 2 3 4 5
        int left=0;                     //  1 2 3 5 7 9     mid=3    x=1
        int x=v2[i];
        int right=v1.size()-1;
        int mid;
        bool isYES=false;
        while(left<=right){
            mid=(left+right)/2;
            if(v1[mid]==x){
                isYES=true;
                break;
            }
            else if(v1[mid]<x){
                left=mid+1;
            }
            else if(v1[mid]>x){
                right=mid-1;
            }
        }
        if(isYES==false){
            cout<<"NO"<<endl;

        }
        else if(isYES==true){
            cout<<"YES"<<endl;
        }


    }
return 0;
}