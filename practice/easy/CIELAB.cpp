#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	int sum=a-b;
	if(sum%10>=0 && sum%10<9)
	    sum++;
	else
	    sum--;
	cout<<sum;
	return 0;
}