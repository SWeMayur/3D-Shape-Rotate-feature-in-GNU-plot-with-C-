#pragma once
#include "Geometry3d.h"
#include<string>
#include<iostream>
class readFile : public Geometry3d{
    public:
        readFile();
        ~readFile();
        void readFromFile(std::string);
};
