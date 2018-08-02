#include <iostream>
using namespace std;
long gcd(int a, int b){
    while(b>0){
        a=a%b;
        swap(a,b);
    }
    return a;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    long a,b;
	    cin>>a>>b;
	    long hcf=gcd(a,b);
	    long lcm=(a*b)/hcf;
	    cout<<hcf<<" "<<lcm<<endl;
	}
	return 0;
}
