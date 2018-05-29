#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n,a,b,lead=0,w;
	int p1_total=0,p2_total=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a>>b;
	    p1_total += a;
        p2_total += b;
        int temp = abs(p1_total-p2_total);
        if (temp>lead){
            lead = temp;
            w = p1_total>p2_total?1:2;
        }
	}
	cout<<w<<' '<<lead;
	return 0;
}