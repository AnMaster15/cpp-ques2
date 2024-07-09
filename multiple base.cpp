#include <iostream>
using namespace std;
class base1 {
protected: int i;
public:
base1(int x) { i=x;  }
~base1()  {  }};
class base2 {
protected: int k;
public:
base2(int x) { k=x;  }
~base2() { } };
class derived: public base1, public base2 {
int j;
public:
derived(int x,  int z):  base2(z)
{ j=x;  }
~derived() {  }
void show() { cout << i << " " << j << " " << k << "\n"; }
};
int main()
{ derived ob(3, 5);
ob.show(); // displays 4 3 5
return 0; }

