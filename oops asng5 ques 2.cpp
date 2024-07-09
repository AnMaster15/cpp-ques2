#include<iostream>
#include<cstring>

using namespace std;

class z;
class x{
	public:
				
		char a[20]="hello";
		x(string i){
			strcpy(i,a);

	}
	~x();

};

class y{
	public:
			char b[20]="world";
		y(){
		
		}
		~y();
};

class z:public x,public y{
	public:
		z(){
			cout<<strcat(a,b)<<endl;
		}
		~z();
};

int main(){
	z obj;


return 0;
}

