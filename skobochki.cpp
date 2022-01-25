#include<iostream>      // ((((( )))))    (()( )()   ( (( )))
#include<vector>                                       //#012 345
using namespace std;   //[ ]   

int main(){
    string skobochki;
    cin>>skobochki;
    vector<string>v1;
    vector<char>v2;
    v1.push_back(skobochki);
    bool zakrytyhBolwe=false;
    for(int i=0;i<skobochki.size();i++){
        if(skobochki[i]=='('){
            v2.push_back(skobochki[i]);    //v1=dano v2=((( 
        }
        else if(skobochki[i]==')'){       //(((  v2=(((  if(
            if(v2.size()==0){
                zakrytyhBolwe=true;
                break;
            }
            v2.pop_back();
        }
    }
    bool otkrytyhBolwe=false;
    if(v2.size()>0){
        otkrytyhBolwe=true;
    }
    if(otkrytyhBolwe==true || zakrytyhBolwe==true){
        cout<<"WRONG"<<endl;
    }
    else{
        cout<<"OK"<<endl;
    }

return 0;
}