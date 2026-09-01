#include<iostream>
#include<string>
using namespace std;

class Passenger
{
{
    string name;
    int age;
    public:
    Passenger()
    {
        name=" ";
        age=0;
    }
    void inputpassenger()
    {
        cout<<"Enter passenger name : ";
        cin>>name;
        cout<<"Enter age : ";
        cin>>age;
    }
    void displaypassenger()
    {
        cout<<endl<<"Passenger Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class Ticket
{
    string source;
    string destination;
    int fare;
    public:
    Ticket()
    {
        source=" ";
        destination=" ";
        fare=0;
    }
    void generateticket(string s,string d)
    {
        source=s;
        destination=d;
        fare=50;
    }
    void displayticket()
    {
        cout<<endl<<"-----METRO TIcKET-----"<<endl;
        cout<<"Source : "<<source<<endl;
        cout<<"Destination : "<<destination<<endl;
    }

};

class Station
{
    string name;
    public:
    Station()
    {
        name=" ";
    }
    Station(String n)
    {
        name=n;
    }
    void displaystation()
    {
        cout<<name;
    }
};

int main()
{
    Passenger p[20];
    int c=0;
    Ticket t;
    int choice;
    d0
    {
        cout<<endl<<"------METRO TRANSIT MANAGER------"<<endl;
        cout<<"1. Add passenger"<<endl;
        cout<<"2. Display all passengers"<<endl;
        cout<<"3. Display a particular passenger"<<endl;
        cout<<"4. Buy a ticket"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:
                if (c==20)
                {   cout<<"Passenger storage is full !";
                    break;
                }
                cout<<endl<<"Enter details of passenger : "<<c+1<<endl;
                p[c].inputpassenger();
                c++;
                
        }
    }
}