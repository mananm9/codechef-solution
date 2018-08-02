#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    int arr[n][n];
	    for(int j=0;j<n;j++){
	        for(int k=0;k<=j;k++){
	            cin>>arr[j][k];
	        }
	    }
	    for(int j=n-1;j>0;j--){
	        for(int k=0;k<=j;k++){
	            if(arr[j][k]>arr[j][k+1])
	                arr[j-1][k]+=arr[j][k];
	            else
	                arr[j-1][k]+=arr[j][k+1];
	        }
	    }
	    cout<<arr[0][0]<<endl;
	}
	return 0;
}
