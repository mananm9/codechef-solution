#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float sal,gSal;
	    cin>>sal;
	    if(sal>=1500)
	        gSal=(0.98*sal)+sal+500;
	    else
	        gSal=(0.9*sal)+sal+(0.1*sal);
	    cout<<fixed<<setprecision(2)<<gSal<<endl;
	}
	return 0;
}
