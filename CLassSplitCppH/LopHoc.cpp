#include <iostream>
#include "LopHoc.h"
using namespace std;


LopHoc::LopHoc(){
    this->maLop = "N";
    this->tenLop = "N";
}
LopHoc::LopHoc(string maLop, string name){
    this->maLop = maLop;
    this->tenLop = name;
}
LopHoc::~LopHoc(){
}
void LopHoc::hienThiLopHoc(){
    cout<<this->maLop<<" : "<<this->tenLop<<endl;
}
void LopHoc::hienThiLopHoc(string maLop, string name){
    cout<<maLop<<" : "<<name<<endl;
}
