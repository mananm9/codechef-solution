#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char exp[1000];
	    cin>>exp;
	    stack<char> S;
	    for(int i=0;i<strlen(exp);i++){
	        if(exp[i]=='(')
	            S.push(exp[i]);
	        else if(exp[i]==')'){
	            cout<<S.top();
	            S.pop();
	            S.pop();
	        }
	        else if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'||exp[i]=='^')
	            S.push(exp[i]);
	        else
	            cout<<exp[i];
	    }
	    cout<<endl;
	}
	return 0;
}
