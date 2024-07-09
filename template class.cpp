#include<iostream>

using namespace std;

template<class t,class b>

class a{
	t x, y;

	public:
		a(t c,t d){
			x=c;
			y=d;
		}
		
		
		void display(){
			cout<<x<<endl<<y;
		}

};

int main(){
	
	a  <int,double> ob(4,5.7);  
	ob.display();
	


return 0;
}

