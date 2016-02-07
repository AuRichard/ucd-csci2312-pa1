// A 3-dimensional point class!
// Coordinates are double-precision floating point.
#ifndef __POINT_H
#define __POINT_H
#include <cmath>//For square root usage

class Point {
    
private:
    double x, y, z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three-argument constructor
    
    
    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods
    double getX() const;
    double getY() const;
    double getZ() const;
    
    //DistanceTo member function
    double distanceTo(const Point&) const;
   
};

#endif // __POINT_H
