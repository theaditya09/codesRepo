#include <iostream>
using namespace std; 

class A{
    public:
    void print()
    {
        cout<<"Inside A class"<<endl;
    }

};

class B:public A{
    public:
    void print()
    {
        cout<<"Inside B class"<<endl;
    }
};

class C{

};

int main() {
    A obj1;
    B obj2;

    A* ptr;
    ptr = &obj2;
    ptr->print();
   

    return 0;
}