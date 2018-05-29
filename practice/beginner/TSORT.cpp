#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	// your code goes here
	int t,i;
	cin>>t;
	int n[t];
	for(i=0;i<t;i++)
	{
	    cin>>n[i];
	}
	sort(n,n+t);
	for(i=0;i<t;i++)
	    cout<<n[i]<<endl;
	return 0;
}