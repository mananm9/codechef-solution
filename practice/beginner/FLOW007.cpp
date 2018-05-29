#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int rev[6];
	    bool flag=false;
	    int n,j=0;
	    cin>>n;
	    while(n>0)
	    {
	        if(((n%10)!=0) || flag)
	        {
	            rev[j]=n%10;
	            j++;
	            flag=true;
	        }
	        n/=10;
	    }
	    for(int k=0;k<j;k++)
	        cout<<rev[k];
	    cout<<endl;
	}
	return 0;
}