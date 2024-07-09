//9.	How will you convert one UDT to another UDT. For example conversion of polar to cartesian system. 
//Polar p(10,5); 
//Cartesian c = p;
//c.show();


#include <iostream>
#include<cmath>
using namespace std;

class Polar {  
private:
    double r; 
    double theta; 
public:
    Polar(double r = 0, double theta = 0) {
        this->r = r;
        this->theta = theta;
    }

    double getRadius(){ return r; }
    double getTheta(){ return theta; }
};

class Cartesian {  
private:
    double x; 
    double y; 
public:
    Cartesian(double x = 0, double y = 0) {
        this->x = x;
        this->y = y;
    }

    double getX()  { return x; }
    double getY()  { return y; }
};

Cartesian convertPolarToCartesian( Polar& p) {
    double r = p.getRadius();
    double theta = p.getTheta();
    double x = r * cos(theta);
    double y = r * sin(theta);
    return Cartesian(x, y);
}

int main() {
    Polar polarCoord(5, 1.0472); 
    Cartesian cartesianCoord = convertPolarToCartesian(polarCoord);
    cout << "Polar coordinate (r, theta): (" << polarCoord.getRadius() << ", " << polarCoord.getTheta() << ")" << endl;
    cout << "Cartesian coordinate (x, y): (" << cartesianCoord.getX() << ", " << cartesianCoord.getY() << ")" << endl;
    return 0;
}

