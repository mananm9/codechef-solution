#include <iostream>
using namespace std;
int multiply(int res[], int rsize, int num)
{
    int carry=0;
    int a;
    for(int i=0;i<rsize;i++)
    {
        a=(res[i]*num)+carry;
        carry=a/10;
        res[i]=a%10;
    }
    while(carry>0)
    {
        res[rsize]=carry%10;
        rsize++;
        carry/=10;
    }
    return rsize;
}
int fact(int num)
{
    int rsize=1;
    int res[500];
    res[0]=1;
    while(num>0)
    {
        rsize=multiply(res,rsize,num);
        num--;
    }
    for(int i=rsize-1;i>=0;i--)
        cout<<res[i];
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a;
	    cin>>a;
	    fact(a);
	    cout<<endl;
	}
	return 0;
}