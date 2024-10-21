#include <iostream>
using namespace std; 

class rectangle{

    private :
        int length;
        int width;
        static int count;

    public:

        rectangle(int x = 0, int y = 0)
        {
            length = x;
            width = y;
            count++;
        }

        inline int calculateArea()
        {
            return length * width;
        }

        static int getCount()
        {
            return count;
        }

        friend bool compareAreas(rectangle&, rectangle&);
};

bool compareAreas(rectangle& a, rectangle& b)
{
    if(a.calculateArea() > b.calculateArea())
    {
        return true;
    }
    else{
        return false;
    }
}

int rectangle::count = 0;

int main() {
    

    rectangle r1, r2(5,4), r3(8,3), r4(9,4);

    cout<<"Area of r1 "<< r1.calculateArea()<<endl;
    cout<<"Area of r2 "<< r2.calculateArea()<<endl;
    cout<<"Area of r3 "<< r3.calculateArea()<<endl;
    cout<<"Area of r4 "<< r4.calculateArea()<<endl;

    cout<<"Object count = "<<rectangle::getCount()<<endl;

    cout<<compareAreas(r1,r2)<<endl;
    cout<<compareAreas(r3,r4)<<endl;


    return 0;
}