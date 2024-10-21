#include <iostream>
using namespace std; 

class Time{

    private:
    int h;
    int m;
    int s;

    public:

    void ReadData()
    {
        cout<<"Enter time : "<<endl;
        cin>>h>>m>>s;
    }

    void displayData()
    {
        cout<<"Hours : "<<h<<"Minutes : "<<m<<" Seconds : "<<s<<endl;
    }

    Time addTime(Time t1, Time t2)
    {
        Time t3;

        t3.h = t1.h + t2.h;
        t3.m = t1.m + t2.m;
        t3.s = t1.s + t2.s;

        if(t3.s>=60)
        {
            t3.s = t3.s%60;
            t3.m++;
        }

        if(t3.m>=60)
        {
            t3.m = t3.m%60;
            t3.h++;
        }

        return t3;
    }

};

int main() {
   
    Time t1,t2,t3,ans;

    t1.ReadData();
    t2.ReadData();
    ans = t3.addTime(t1,t2);
    ans.displayData();

    return 0;
}