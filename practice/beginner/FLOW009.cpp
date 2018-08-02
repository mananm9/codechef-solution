#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float q,p;
	     cin>>q>>p;
	     if(q>1000)
	     cout<<fixed<<setprecision(6)<<0.9*q*p;
	     else 
	     cout<<fixed<<setprecision(6)<<q*p;
	     cout<<endl;
	}
	return 0;
}
