#include<iostream>
#include<set>

using namespace std;

int maxNum = 0;

struct Node {
    int data;
    Node* l;
    Node* r;
};

Node* create(int data){
    Node* x = new Node();
    x->data = data;
    x->r = NULL;
    x->l = NULL;
    return x;
}
void insert(Node* elem, int x){
 	if(elem->data < x){
 		if(elem->r == NULL){
   			elem->r = create(x);
  		}
  		else{
   			insert(elem->r, x);
  		}
 	}
 	else {
  		if(elem->l == NULL){
   			elem->l = create(x);
  		}
  		else {
   			insert(elem->l, x);
  		}
 	}
}

int func(Node* elem){
 	if(elem == NULL) {
  		return 0;
 	}
 	int x = func(elem->r);
 	int y = func(elem->l);
 	
 
 	maxNum = max(maxNum, x+y+1);
 	return 1+max(x, y);
}

int main(){
	set<int> checkUniq;

    Node*  topHead = NULL;
    int n;
    cin >> n;
    int matt[n+100];
    for(int i = 0; i < n; i++){
        cin >> matt[i];
    }
    for(int i = 0; i < n; i++){
        if(checkUniq.count(matt[i])){

        }
        else{
         	if(i == 0){
          		topHead = create(matt[i]);
         	}
         	else {
          		insert(topHead, matt[i]);
         	}
         	checkUniq.insert(matt[i]);
        }
    }
    func(topHead);
    cout << maxNum;
}