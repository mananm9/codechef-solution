#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,min,max;
	    cin>>a>>b;
	    max=a+b;
	    if(a<b)
	        min=b;
	    else
	        min=a;
	    cout<<min<<" "<<max<<endl;
	}
	return 0;
}
