#include <iostream>
#include <vector>
using namespace std; 

class salesperson;

class salesorder{
    private:
        int ordno;
        string itemname;
        int dd;
        string addr;

    public:
        void getDetails()
        {
            cin>>ordno;
            cin>>itemname;
            cin>>dd;
            cin>>addr;
        }

        friend void orderCheck(salesorder[], salesperson, int);
};


class salesperson{
    private:
        string name;
        int arr[3];
    public:
        salesperson(string name, int arr[])
        {
            this -> name = name;
            
            for(int i=0; i<3; i++)
            {
                this -> arr[i] = arr[i];
            }
        }

        friend void orderCheck(salesorder[], salesperson, int);
};

void orderCheck(salesorder orders[], salesperson s1, int deldate)
{
    bool flag = true;
    int i=0;
   while(i<5)
    {
        for(int j=0; j<3; j++)
        {
            if(orders[i].ordno == s1.arr[j])
            {
                flag = false;
                cout<<s1.name<<endl;
                break;
            }
        }
        i++;

    }

    if(i == 5 && flag)
    {
        cout<<"The order is not found"<<endl;
    }

    for(int i=0; i<5; i++)
    {
        if(orders[i].dd == deldate)
        {
            cout<<orders[i].itemname<<endl;
        }
    }
}

int main() {

    salesorder orders[5];

    for(int i=0; i<5; i++)
    {
        orders[i].getDetails();
    }

    int arr[3];
    string name;
    cin>>name;
    cin>>arr[0]>>arr[1]>>arr[2];
    int deldate;
    cin>>deldate;
    salesperson person1(name,arr);
    orderCheck(orders, person1, deldate);
    
    return 0;
}