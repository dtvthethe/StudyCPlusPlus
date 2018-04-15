#include <iostream>
#include <string>
using namespace std;

const int UNIX = 100;

void hA(int a);
void hB(int *b);
void hC(int &c);


int main (){
    int x = 1;
    int *y = &x;
    int &z = x;

    //int *y = 1; // ERROR
    //int &z = 1; // ERROR
    
    cout<<"=====X====="<<endl;
    hA(x);
    hB(&x);
    hC(x);
    cout<<"=====Y====="<<endl;
    hA(*y);
    hB(y);
    hC(*y);
    cout<<"=====Z====="<<endl;
    hA(z);
    hB(&z);
    hC(z);

    return 0;
}

void hA(int a){
    int r = a + UNIX;
    cout<<"A : "<<r<<endl;
}

void hB(int *b){
    int r = *b + UNIX;
    cout<<"*B b : "<<b<<endl;
    cout<<"*B *b : "<<*b<<endl;
    cout<<"*B &b : "<<&b<<endl;
    cout<<"*B : "<<r<<endl;
}

void hC(int &c){
    int r = c + UNIX;
    cout<<"&C c : "<<c<<endl;
    cout<<"&C *c : ERROR"<<endl; // Print *c error
    cout<<"&C &c : "<<&c<<endl;
    cout<<"&C : "<<r<<endl;
}

/*
=====X=====
A : 101
*B b : 0x7fff5fbff868
*B *b : 1
*B &b : 0x7fff5fbff7e8
*B : 101
&C c : 1
&C *c : ERROR
&C &c : 0x7fff5fbff868
&C : 101
=====Y=====
A : 101
*B b : 0x7fff5fbff868
*B *b : 1
*B &b : 0x7fff5fbff7e8
*B : 101
&C c : 1
&C *c : ERROR
&C &c : 0x7fff5fbff868
&C : 101
=====Z=====
A : 101
*B b : 0x7fff5fbff868
*B *b : 1
*B &b : 0x7fff5fbff7e8
*B : 101
&C c : 1
&C *c : ERROR
&C &c : 0x7fff5fbff868
&C : 101
*/
