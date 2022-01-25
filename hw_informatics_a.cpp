#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>words;
    vector<int>numbers;
    for(int i=0;i<n;i++){
        string x;
        int z;
        cin>>x;
        cin>>z;
        words.push_back(x);
        numbers.push_back(z);
    }
    vector<string,int>last;
    for(int i=0;i<words.size();i++){
        for(int y=0;y<numbers.size;y++){
            if(words[i]=="push"){
                last.push(numbers[y]);
                cout<<"ok";
            }
            else if(word[i]=="pop"){
                last.pop(numbers[y]);
                cout<<"ok";
            }
            else if(word[i]=="back"){
                last.back(numbers[y]);
                cout<<"ok";
            }

        }
    }

}