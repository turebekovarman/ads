#include<iostream>
#include<algorithm>

using namespace std;

void Palindrom(string word){
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
}
int main(){
    string word;
    cin>>word;
    Palindrom(word);

return 0;
}
