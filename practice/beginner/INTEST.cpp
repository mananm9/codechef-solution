#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
	// your code goes here
	long long n,k;
	int count=0;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
	    long long a;
	    cin>>a;
	    if(fmod(a,k)==0)
	        count++;
	}
	cout<<count;
	return 0;
}