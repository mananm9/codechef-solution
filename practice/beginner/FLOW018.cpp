#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long n;
	    cin>>n;
	    long fact=1;
	    while(n>0)
	        fact*=n--;
	    cout<<fact<<endl;
	}
	return 0;
}