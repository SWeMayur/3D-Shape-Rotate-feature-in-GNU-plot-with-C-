#include "../header/Point3d.h"
#include<vector>
#pragma once
class Geometry3d{
    public:
    Geometry3d();
    ~Geometry3d();
void saveData();
void saveDataRotate();

    std::vector<Point3d> mData;
};