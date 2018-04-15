#include<iostream>
using namespace std;

struct ActorBase{
    virtual void Run(){
        cout<<"Base: Run"<<endl;
    }
    
    virtual void Q(){
        cout<<"Base: Q"<<endl;
    }
};

struct Ashe: public ActorBase{
    void Run(){
        cout<<"Ashe: Run"<<endl;
    }
    
    virtual void Q(){
        cout<<"Ashe: Tien Thiet Xa"<<endl;
    }
};

struct Caitlyn: public ActorBase{
    void Run(){
        cout<<"Caitlyn: Run"<<endl;
    }
    
    virtual void Q(){
        cout<<"Caitlyn: Phat ban xuyen tao"<<endl;
    }
};

int main(){
    
    ActorBase *a = new Ashe();
    a->Run();
    a->Q();
    
    return 0;
}