#include<iostream>
using namespace std;
class  Vehicle:
{
    private:
        string make,model;
        int year;
    public:
    void input_data()
        {
            cout<<"Enter the vehicle details:"<<endl;
            cout<<"Make of the vehicle:";
            cin>>make;
            cout<<"Model of the vehicle:";
            cin>>model;
            cout<<"Year of manufacture:";
            cin>>year;
        }
    void display_details()
        {
            cout<<"Make :"<<make<<endl;
            cout<<"Model :"<<model<<endl;
            cout<<"Manufactured in "<<year<<endl;
        }
};


class Car
{

};
