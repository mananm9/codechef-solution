#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    char n[10000];
	    cin>>n;
	    bool res=true;
	    int a=strlen(n)-1;
	    for(int i=a;i>=a/2;i++){
	        if(n[i]!=n[a-i]){
	            res=false;
	            break;
	        }
	    }
	    if(res)
	        cout<<"wins"<<endl;
	    else
	        cout<<"losses"<<endl;
	}
	return 0;
}
