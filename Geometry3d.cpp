#include "../header/Geometry3d.h"
#include<fstream>
#include<iostream>
#include<math.h>

Geometry3d::Geometry3d(){

}

Geometry3d::~Geometry3d(){

}

void Geometry3d::saveData(){
    std::ofstream dataFile;
    dataFile.open("output.txt");

for (size_t i = 0; i < mData.size(); i++)
  {
      dataFile << mData[i].getx() << " " << mData[i].gety() << " "<< mData[i].getz() << std::endl;
  }
    dataFile.close();
}

void Geometry3d::saveDataRotate(){
    std::ofstream dataFile;
    dataFile.open("output.txt");
    std::cout << "Enter the axis: " << std::endl;
    char axis;
    std::cin >> axis;
    std::cout << "Enter the angle of rotation: " << std::endl;
    double degree;
    std::cin >> degree;
    double pi = 3.14159265359;
    double angle = (degree * (pi / 180));

    switch(axis){
      case 'x': {
        for (size_t i = 0; i < mData.size(); i++)
        { 
          double xp = mData[i].getx();
          double yp = mData[i].gety();
          double zp = mData[i].getz();

          double xd = xp;
          double yd = (yp*cos(angle)) - (zp*sin(angle));
          double zd = (yp*sin(angle)) + (zp*cos(angle));
           
          dataFile << xd << " " << yd << " "<< zd << std::endl;
        }
        dataFile.close();
        break;
      }
      case 'y': {
        for (size_t i = 0; i < mData.size(); i++)
        { 
          double xp = mData[i].getx();
          double yp = mData[i].gety();
          double zp = mData[i].getz();

          double xd = (zp*sin(angle)) + (xp*cos(angle));
          double yd = yp;
          double zd = (zp*cos(angle)) - (xp*sin(angle));
           
          dataFile << xd << " " << yd << " "<< zd << std::endl;
        }
        dataFile.close();
        break;
      }
      case 'z': {
        for (size_t i = 0; i < mData.size(); i++)
        { 
          double xp = mData[i].getx();
          double yp = mData[i].gety();
          double zp = mData[i].getz();

          double xd = (xp*cos(angle)) - (yp*sin(angle));
          double yd = (xp*sin(angle)) + (yp*sin(angle));
          double zd = zp;
           
          dataFile << xd << " " << yd << " "<< zd << std::endl;
        }
        dataFile.close();
        break;
      }
    }
}



















  // for spring(helical shape)
// double j = 0.01;
// for(int k = 0 ; k < 5 ; k++){

// for (size_t i = 0; i < mData.size(); i++)
//   {
//       dataFile << mData[i].getx() << " " << mData[i].gety() << " "<< 5+j << std::endl;
//       j+=0.01;
//   }
// }
  //   for (size_t i = 0; i < mData.size(); i++)
  // {
  //   double r = 15;
  //     dataFile << mData[i].getx() << " " << mData[i].gety() << " "<<15<< std::endl;
  // }
  

//for normal circle
 /* for (size_t i = 0; i < mData.size(); i++)
  {
    double r = 15;
      dataFile << mData[i].getx() << " " << mData[i].gety() << " "<<r<< std::endl;
  }*/