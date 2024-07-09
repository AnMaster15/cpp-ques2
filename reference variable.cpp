#include <iostream>

using namespace std;
// Function prototypes (required in C++)

void p_swap(int *, int *);
void r_swap(int&, int&);

int main(){
 int v = 5, x = 10;
 cout << v << x << endl;
 p_swap(&v,&x);
 cout << v << x << endl;
 r_swap(v,x);
 cout << v << x << endl;
 return 0;
}
void p_swap(int *a, int *b)
{
 int temp;
  temp = *a;	
  *a = *b;		
  *b = temp;
}  
void r_swap(int &a, int &b)
{
 int temp;
 temp = a;		
 a = b;		
 b = temp;
}


