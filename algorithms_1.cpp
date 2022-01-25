#include<iostream>           // 5
#include<vector>             //[]...12345

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
    int chislo;
    cout<<"vvedite chislo: ";
    cin>>chislo;
    int l=0;                   //0 1 2 3 4      x=2
    int r=v.size()-1;         // 2 5 8 9 11    (l+r)/2  mid=2;
    int seredina;  
    bool isYes=false;           
    while(l<=r){
        seredina=(l+r)/2;
        if(v[seredina]==chislo){
            isYes=true;
            break;
        }
        else if(v[seredina]<chislo){
            l=seredina+1;
        }
        else if(v[seredina]>chislo){
            r=seredina-1;
        }
    }
    if(isYes==true){
        cout<<"YES";
    }
    else if(isYes==false){
        cout<<"NO";
    }
return 0;
}