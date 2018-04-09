#include <iostream>
#include <string>
using namespace std;

int tinhTuoi(int tuoi = 10);

int main (){
    int tuoi;
    cout<<"Nhap vao tuoi: ";
    cin>>tuoi;
    cout<<"So tuoi cua ban la: "<<tinhTuoi(tuoi)<<endl;
    return 0;
}

int tinhTuoi(int tuoi2){
    return tuoi2 * 2;
}