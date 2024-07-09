#include <iostream>
using namespace std; 
class B
{ 
public: 
 int b; 
 void show() 
 { 
 cout << b << endl; 
 } 
}; 
class D: public B
{ 
public: 
 int d; 
 // int b; but belongs to base
 void show() 
 { 
 cout << d << endl; 
 cout << b << endl; 
 } 
}; 
int main() 
{ 
 B obj; 
 B *ptr = &obj; 
 obj.b = 10; 
 obj.show(); // 10
 ptr->b = 20; 
 ptr->show(); //20
 D objd; 
 objd.d=9; 
 ptr = &objd; // type B = content of 
//type D
 //D *)(ptr)->(d);
 D *ptr1; 
 ptr1 = &objd; 
 ptr1->show(); 
 return 0; 
}
