// v1: [3 6 8 11]
//5
//0)5-3=2
//1)abs(5-6)=1
//2)5-8=3
//4)5-11=6

// v2: [2, 1, 3, 6] index = 1
//cout << v1[index]
//minimum =2 (1) -> answer=6

#include<iostream>
#include<vector>
#include<algorithm>

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
    cout<<"vvedite chislo:";
    cin>>chislo;
    vector<int>v2;
    int num=0;
    for(int i=0;i<v1.size();i++){
        num=abs(chislo-v1[i]);
        v2.push_back(num);   
    }
    int index=0;
    int min=INT_MAX;
    for(int i=0;i<v2.size();i++){
        if(v2[i]<min){
            min=v2[i];
            index=i;
        }
    }
    cout<<v1[index];

return 0;

}