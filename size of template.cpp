#include<iostream>
using namespace std;
template <class T, int size> //type 
//parameter, non type parameter
void show(T a)
{
 cout << a << " " << size << endl;
}
int main()
{
show <char,10> ('c'); // learn 
show( 'c', 10);
show <int, 20> (12);
show <float, 20> (12.1);
}
