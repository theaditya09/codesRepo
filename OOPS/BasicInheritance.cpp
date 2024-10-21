#include <iostream>
using namespace std; 

class student{
    int roll_no;
    string name;

    public :
    void readData()
    {
        cout<<"Enter roll no and name : ";
        cin>>roll_no>>name;
    }
};

class test{
    int marks[5] = {0};

    public:
    void readData()
    {
        cout<<"Enter marks of 5 subjects : ";
        for(int i=0;i<5; i++)
        {
            cin>>marks[i];
        }
    }
};

class result : private student, private test{
    private : 
    int total;
    float precentage;

    public :
    void display(){
        cout<<"Marks are : ";
        for(int i=0; i<5; i++)
        {
            cout<<marks[i]<<" ";
        }
    }


}

int main() {

    result r1;
    r1.readData();
    r1.display();
    
    return 0;
}