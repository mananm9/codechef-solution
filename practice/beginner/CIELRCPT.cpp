#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	for(int i=0;i<t;i++)
	{
	    int p,count=0;
	    cin>>p;
	    for(int j=11;j>=0;j--)
	    {
	        if(p>=arr[j])
	        {
	            count+=(p/arr[j]);
	            p=p%arr[j];
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}