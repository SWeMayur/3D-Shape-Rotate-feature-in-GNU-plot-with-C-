#include"../header/Point3d.h"

double Point3d::getx(){
    return px;
}

double Point3d::gety(){
    return py;
}

double Point3d::getz(){
    return pz;
}

 Point3d::Point3d(double x, double y, double z){
    px = x;
    py = y;
    pz = z;
 }

Point3d::~Point3d(){

 }
