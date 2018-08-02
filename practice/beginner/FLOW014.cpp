#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float h,c,t,res;
	    cin>>h>>c>>t;
	    bool x=false;
	    bool y=false;
	    bool z=false;
	    if(h>50)
	        x=true;
	    if(c<0.7)
	        y=true;
	    if(t>5600)
	        z=true;
        if(x){
            if(y){
                if(z)
                    res=10;
                else
                    res=9;
            }
            else if(z)
                res=7;
            else
                res=6;
        }
        else if(y)
            if(z)
                res=8;
            else
                res=6;
        else if(z)
            res=6;
        else
            res=5;
        cout<<res<<endl;
	}
	return 0;
}
