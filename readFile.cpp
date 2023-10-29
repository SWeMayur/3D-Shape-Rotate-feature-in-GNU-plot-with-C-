#include "../header/readFile.h"
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include <vector>
#include<math.h>

readFile::readFile(){

}

readFile::~readFile(){

}

std::vector<double> stringConvert(std::string input){
    std::istringstream iss(input);
    double value;
    std::vector<double> doubleValues;

    while (iss >> value) {
        doubleValues.push_back(value);
    }
    return doubleValues;
}

void readFile :: readFromFile(std::string fileName){
    std::string line;
    std::ifstream read{fileName};
    std::ofstream write{"D:\\3DShapeRotate\\CubeModel.txt"};
    
    int count=0;
    std::string firstLine = "";
   while(std::getline(read,line)){
        size_t index = line.find("vertex");
        if(index != std::string::npos){
            if(count == 0){
                firstLine = line.substr(index+7);
            }
            // write << line.substr(index+7) << std::endl;
            std::vector<double> vals = stringConvert(line.substr(index+7));
            Point3d ptd(vals[0], vals[1], vals[2]);
            mData.push_back(ptd);
            count++;    
        }
        if(count == 3){
            // write << firstLine << std::endl;
            std::vector<double> vals = stringConvert(firstLine);
            Point3d ptd(vals[0], vals[1], vals[2]);
            mData.push_back(ptd);
            firstLine = "";
            count = 0;
        }
 
    }
    read.close();
    write.close();
    saveDataRotate();
}
