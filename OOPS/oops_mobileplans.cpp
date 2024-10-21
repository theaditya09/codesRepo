#include <iostream>
using namespace std; 

int extradatacost(int dataLim, int dataUsed);
int extramsgcost(int msgLimit, int msgUsed);
float discount(int total);
float totalBill(int total);

class Mobile_plan{
    public:
    string plan_name;
    int bp;
    int data_limit;
    int callmins;
    int msgsent;
    int data_used;

    void getDetails()
    {
        cin>>callmins;
        cin>>data_used;
        cin>>msgsent;
    }

    void display()
    {
        cout<<"Mobile_plan Class"<<endl;
        cout<<"Call mins "<<this -> callmins<<" - "<<"Data Used "<<this->data_used<<" - "<<"Msg Sent "<<this->msgsent<<endl;
    }

};

class Silver_plan:public Mobile_plan{
    public : 
    string plan_name = "SILVER";
    int bp = 500;
    float ppm = 2.0;
    int data_limit = 15;
    int msg_limit = 100;
    float pretotal = bp;

    int callmins;
    int data_used;
    int msgsent;

    Silver_plan(Mobile_plan obj)
    {
        this -> callmins = obj.callmins;
        this -> data_used = obj.data_used;
        this -> msgsent = obj.msgsent;

        pretotal = pretotal + callmins * ppm;

        if(data_used > data_limit)
        {
            pretotal = pretotal + extradatacost(data_limit, data_used);
        }

        if(msgsent > msg_limit)
        {
            pretotal = pretotal + extramsgcost(msg_limit,msgsent);
        }

        cout<<"SILVER"<<endl<<pretotal<<endl<<discount(pretotal)<<endl<<totalBill(pretotal)<<endl;

    }
    
    void display()
    {
        cout<<"Silver Class"<<endl;
        cout<<"Call mins "<<this -> callmins<<" - "<<"Data Used "<<this->data_used<<" - "<<"Msg Sent "<<this->msgsent<<endl;
    }
};

class Gold_plan:public Mobile_plan{
    public:
    string plan_name = "GOLD";
    int bp = 1000;
    float ppm = 1.0;
    int data_limit = 20;
    int msg_limit = 200;
    int callmins;
    int data_used;
    int msgsent;
    float pretotal = bp;

    Gold_plan(Mobile_plan obj)
    {
        this -> callmins = obj.callmins;
        this -> data_used = obj.data_used;
        this -> msgsent = obj.msgsent;

        pretotal = pretotal + callmins * ppm;

        if(data_used > data_limit)
        {
            pretotal = pretotal + extradatacost(data_limit, data_used);
        }

        if(msgsent > msg_limit)
        {
            pretotal = pretotal + extramsgcost(msg_limit,msgsent);
        }

        cout<<"GOLD"<<endl<<pretotal<<endl<<discount(pretotal)<<endl<<totalBill(pretotal)<<endl;
    }

    void display()
    {
        cout<<"Gold Class"<<endl;
        cout<<"Call mins "<<this -> callmins<<" - "<<"Data Used "<<this->data_used<<" - "<<"Msg Sent "<<this->msgsent<<endl;
    }

};

class Diamond_plan:public Mobile_plan{
    public:
    string plan_name = "DIAMOND";
    int bp = 2000;
    float ppm = 0.5;
    int data_limit = 50;
    int msg_limit = 500;
    int callmins;
    int data_used;
    int msgsent;
    float pretotal = bp;

    Diamond_plan(Mobile_plan obj)
    {
        callmins = obj.callmins;
        data_used = obj.data_used;
        msgsent = obj.msgsent;

        pretotal = pretotal + callmins * ppm;

        if(data_used > data_limit)
        {
            pretotal = pretotal + extradatacost(data_limit, data_used);
        }

        if(msgsent > msg_limit)
        {
            pretotal = pretotal + extramsgcost(msg_limit,msgsent);
        }

        cout<<"DIAMOND"<<endl<<pretotal<<endl<<discount(pretotal)<<endl<<totalBill(pretotal)<<endl;
    }

    void display()
    {
        cout<<"Diamond Class"<<endl;
        cout<<"Call mins "<<this -> callmins<<" - "<<"Data Used "<<this->data_used<<" - "<<"Msg Sent "<<this->msgsent<<endl;
    }
};

int extradatacost(int dataLim, int dataUsed)
{
    int diff = dataUsed - dataLim;
    return diff*2;
}

int extramsgcost(int msgLimit, int msgUsed)
{
    int diff = msgUsed - msgLimit;
    return diff;
}

float discount(int total)
{
    float dis=0;
    if(total <=1000)
    {
        dis = 0.3*total;
    }
    else if(total>=1001 && total <= 2000)
    {
        dis = 0.4*total;
    }
    else{
        dis = 0.05*total;
    }

    return dis;
}

float totalBill(int total)
{
    return total - discount(total);
}

int main() {

    Mobile_plan m1;
    m1.getDetails();

    Silver_plan s1(m1);

    Gold_plan g1(m1);

    Diamond_plan d1(m1);



    return 0;
}