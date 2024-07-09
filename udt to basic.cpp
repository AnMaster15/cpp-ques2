#include<iostream>

using namespace std;

class a{
	float var1,var2;
	public:
		a(float n,float m){
			var1=n;
			var2=m;
		}
		
		operator float(){
			//float t;
			//t=var1*2;
			//return t;
			return var1+var2;
		}

};

int main(){
	a ob(7,4);
	float d;
	d=ob;
	
cout<<d;

return 0;
}

