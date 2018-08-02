#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int s[n];
	    for(int i=0;i<n;i++)
	        cin>>s[i];
	    sort(s,s+n);
	    int min=s[1]-s[0];
	    for(int i=2;i<n;i++){
	        if((s[i]-s[i-1])<min)
	            min=s[i]-s[i-1];
	    }
	    cout<<min<<endl;
	}
	return 0;
}
