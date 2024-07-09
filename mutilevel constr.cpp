#include<iostream>

using namespace std;

class alpha{
	protected:
		int x;
		
	public:
		alpha(int a){
			x=a;
		}
		
		~alpha(){
			cout<<"base des1"<<endl;
		
		}
		
};
class beta{
	protected:
		int y;
		
	public:
		beta(int b){
			y=b;
		}
		~beta(){
			cout<<"base des2"<<endl;
		
		}
		
		
};

class gamma:public alpha,public beta{
	int z;
	public:
		
		gamma(int a,int b,int c):alpha(a),beta(b)
		{
				z=c;
			}
		
		~gamma(){
		cout<<"derived des"<<endl;}
		
		void show(){
			cout<<x<<" "<<y<<" "<<z<<endl;
		
		}
};

int main(){
	
	gamma ob(2,4,5);
	ob.show();
	
}
