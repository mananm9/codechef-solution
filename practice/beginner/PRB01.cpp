#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    bool res=true;
	    for(int i=2;i*i<n;i++){
	        if(n%i==0){
	            res=false;
	            break;
	        }
	    }
	    if(res)
	        cout<<"yes"<<endl;
	    else
	        cout<<"no"<<endl;
	}
	return 0;
}
