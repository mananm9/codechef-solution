#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    int arr[6]={100,50,10,5,2,1};
	    for(int i=0;i<6;i++){
	        if(n%arr[i]!=n && n>0){
	            count+=n/arr[i];
	            n=n%arr[i];
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
