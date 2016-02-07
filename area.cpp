#include <iostream>
#include <cmath>
#include "Point.h"


double computeArea(const Point &a, const Point &b, const Point &c){
    double length1, length2, length3, area;
    
    length1 = a.distanceTo(b);
    length2 = b.distanceTo(c);
    length3 = c.distanceTo(a);
    
    area = 0.25 * sqrt((4* pow(length1,2) * pow(length2,2))-pow((pow(length1,2)+pow(length2,2)-pow(length3,2)),2));

    return area;
}