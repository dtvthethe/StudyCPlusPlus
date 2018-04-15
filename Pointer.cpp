#include<iostream>

using namespace std;

int main(){
    int Apple = 1;
    
    int *p;
    
    //*p = Apple;
    
    p = &Apple;
    cout<<Apple<<"; p: "<<p<<"; *p: "<<*p<<"; &p: "<<&p<<endl;
    
    return 0;
}