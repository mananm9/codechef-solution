#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,a,sum=0;
	    cin>>n;
	    sum+=(n%10);
	    while(n>0)
	    {
	        n/=10;
	        if(n!=0)
	            a=n;
	    }
	    sum+=a;
	    cout<<sum<<endl;
	}
	return 0;
}