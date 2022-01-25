//i   0 1 2   j
//0   1 2 3
//1   4 5 6
//2   7 8 9
//x=7 yes        if x=10  no
#include<iostream>

using namespace std;

int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int chislo;
            cin>>chislo;
            a[i][j]=chislo;
        }
    }
    bool isYES=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==x){
                isYES=true;
                break;
            }
            else{
                isYES=false;
            }
        }
    }
    if(isYES==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    }

return 0;
}
