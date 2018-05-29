#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,count=0;
	    cin>>n;
	    while(n>0)
	    {
	        if((n%10)==4)
	            count++;
	        n/=10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}