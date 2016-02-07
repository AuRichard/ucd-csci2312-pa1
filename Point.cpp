#include <iostream>
#include <iomanip>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point() 
{

    x = 0.00;
    y = 0.00;
    z = 0.00;

}

Point::Point(double x1, double y1, double z1) {

    x = x1;
    y = y1;
    z = z1;

}

void Point::setX(double newX) {

	x = newX;

}

void Point::setY(double newY) {

	y = newY;

}

void Point::setZ(double newZ) {

	z = newZ;

}

double Point::getX() const{
    return x;
}

double Point::getY() const{
    return y;
}

double Point::getZ() const{
    return z;
}

//Distance formula
double Point::distanceTo(const Point& i) const{
    
        //To get the coordinates of one point in the triangle.
        double xdistance = i.getX() - i.getX();
        double ydistance = i.getY() - i.getY();
        double zdistance = i.getZ() - i.getZ();
    
        
        double distance;
        distance = sqrt(pow(xdistance,2) + pow(ydistance,2) + (zdistance,2));
        //For getting the distance between the values.
        return distance;
}