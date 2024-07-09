#include<iostream.>

using namespace std;

class test_start{
	static int t_id;
	int hour,minutes,seconds;
	public:
		int d1,d2,d3;
		test_start(){}
		
		test_start(int h,int m,int s){d1=h;d2=m;d3=s;}
		test_start(test_start &t){d1=t.d1;d2=t.d2;d3=t.d3;}
		
		static display_id(){
			cout<<"the final value of t_id"<<t_id<<endl;
		}
		
		
};

int main(){
	//test_start t1,t2,t3;
	test_start t1;
	test_start t2(1,1,1);
	test_start t3(t2);
	
	t1.display_id();
}
