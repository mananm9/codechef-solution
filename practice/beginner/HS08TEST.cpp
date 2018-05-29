#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
 
int main() {
	// your code goes here
	float amount;
	float balance;
	cin>>amount>>balance;
	cout<<setprecision(2)<<fixed;
	if((amount+0.5)<=balance && fmod(amount,5)==0)
	{
	    balance-=amount;
	    balance-=0.5;
	}
	cout<<balance;
	return 0;
}