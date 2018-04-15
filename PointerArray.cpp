#include<iostream>

using namespace std;

int main(){
    int arr[5] = {2,5,4,3,6};
    int *pointer = arr;
    pointer++;

    cout<<*pointer<<" == "<<pointer<<endl;
    
    return 0;
}