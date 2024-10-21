#include <iostream>
using namespace std; 

class car{
    private:
        string company;
        int Top_Speed;
    public:
        void SetData()
        {
            cout<<"Enter Company : ";
            cin>>company;
            cout<<"Enter Top Speed : ";
            cin>>Top_Speed;
        }
        void DisplayData()
        {
            cout<<"Compant is : "<<company<<endl;
            cout<<"Top Speed is : "<<Top_Speed<<endl;
        }
};

int main() {
    car c1;
    c1.SetData();
    c1.DisplayData();
    return 0;
}