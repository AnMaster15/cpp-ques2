#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }

};
int main(){
    Complex *ptr1 = new Complex;
    //(*ptr).setData(1, 54); //is exactly same as
    //(//*ptr).getData(); //is as good as 
    ptr1->setData(1, 4); 
    ptr1->getData();
    return 0;
}
