#include<iostream>  //abba -> ab ba     int sleva sprava

using namespace std;  //0 1 2 3                 3=word.size()-1
                      //a b c a   s[0]==s[3]   s[0]+1==s[3]-1   
int main(){
    string word;
    cin>>word;
    int sleva=0;
    bool isPalindrom=true;
    int sprava=word.size()-1;
   for(int i=0;i<word.size()/2;i++){
       if(word[sleva]==word[sprava]){
           isPalindrom=true;
           sprava--;
           sleva++;
       }
       else{
           isPalindrom=false;
           break;
       }
   }
    if(isPalindrom==false){
        cout<<"ne palindrom"<<endl;
    }
    else if(isPalindrom==true){
        cout<<"Palindrom";
    }
return 0;
}