#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    int mul=5;
	    while(n>=mul){
	        count+=n/mul;
	        mul*=5;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
