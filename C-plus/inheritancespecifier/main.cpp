#include <iostream>

using namespace std;

class vechicle
{
public:
    string brand="ACTIVA";
     void messageprint()
     {
         cout <<"\n Welcome To Activa world";
     }
};

class vechiclecompany
 {
 public:
    string vechiclecompany="HONDA";
    void messageprint1()
   {
    cout <<"\n Welcome to Honda Company";
}
 };

class inheritancedemo : public vechicle,public vechiclecompany
{

};

int main()
{
   inheritancedemo id;
   cout << id.brand;
   cout<< id. vechiclecompany;
   id.messageprint();
   id.messageprint1();
    return 0;
}
