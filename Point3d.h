#pragma once
class Point3d{
    public:
    Point3d(double px, double py, double pz);
    ~Point3d();
 
     double getx();
     double gety();
     double getz();

private:
 double px, py, pz;
};