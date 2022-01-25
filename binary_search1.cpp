#include<iostream>    //0 1 2 3 4
#include<vector>                     // 1 3 5 7 9       x=1
using namespace std;

//if(v[mid]==x){
      //  cout<<mid;
    //}
int main(){                   
    int n;
    cin>>n;
    vector<int>v1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    int x;
    cout<<"vvedite x: ";
    cin>>x;
    int left=0;
    int right=v1.size()-1;
    int mid;
    bool isYES=false;
    while(left<=right){
        mid=(left+right)/2;
        if(v1[mid]==x){
            cout<<mid;
            isYES=true;
            break;
        }
        else if(v1[mid]>x){
            right=mid-1;
        }
        else if(v1[mid]<x){
            left=mid+1;
        }
    }
    if(isYES==false){
        cout<<"NOT FOUND";
    }

    
return 0;
    
}
