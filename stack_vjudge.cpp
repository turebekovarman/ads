// 1 2 +   -> 3
//3 4 -    -> -1
//3 * (-1) ->-3
//[1 , 2           ] int a=2 b=1
//[     ] 2+1=3
//[3]
//[3 , 3 , 4 ]-    a=4,pop  b=3,pop; -->   b-a=-1
//[3, -1]*    -> a=-1   b=3      -->a*c=-3;
//cout<<a*c   ===-3
#include<iostream>
#include<stack>

using namespace std;

int main(){
    string elements;
    cin>>elements;
    stack<int>s1;
    int a=0;
    int b=0;
    for(int i=0;i<elements.size();i++){
        if(isdigit(elements[i])==true){
            s1.push(elements[i]-'0');
        }
        else if(elements[i]==' '){
            continue;
        }
        else if(elements[i]=='+'){
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(a+b);
        }
        else if(elements[i]=='-'){
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(b-a);
        }
        else if(elements[i]=='*'){
            a=s1.top();
            s1.pop();
            b=s1.top();
            s1.pop();
            s1.push(a*b);
        }

    }
    cout<<s1.top();

return 0;

}