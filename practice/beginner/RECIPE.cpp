#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	    int result = arr[0];
        for(int i=1;i<n;i++)
            result=gcd(arr[i], result);
        for(int i=0;i<n;i++)
            cout<<arr[i]/result<<" ";
        cout<<endl;
	}
	return 0;
}
