#include <iostream>
using namespace std; 

class ex{

    private:
    int a;
    int b;
    int c;

    public:

        ex(int a, int b, int c)
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        void print()
        {
            cout<<a<<" "<<b<<" "<<c<<endl;
        }

};

int main() {

    ex a(1,2,3);
    a.print();
    cout<<"Second object"<<endl;

    ex b(a);
    b.print();

    return 0;
}