#include<iostream>
using namespace std; 

template <class T>
class Test {
T var; 
public:
Test (T i) {var=i;}
T divideBy2 () {return var/2;}
};
int main(){
Test <int> t1(50); 
Test <double> t2(-10.20);
cout<<t1.divideBy2()<<" "<<t2.divideBy2()<<endl;
}

