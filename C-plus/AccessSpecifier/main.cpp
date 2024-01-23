#include <iostream>

using namespace std;

class employee
{
private:
    int money;
public:
    string name;
    void setmoney(int s)
    {
       money=s;
    }
    int getmoney()
    {
        return money;
    }

};


int main()
{
    employee em;
    string name;

    cout<<"Enter the name:";
    cin >> name;
    em.name;
em.setmoney(750000) ;

cout << em.getmoney();
return 0;
}






/*

class accesspecifier
{
private:
    int b=12;
    protected:
      int sc=29;
    public:

      int a,c;
      void printb()
      {

      c=b;
      cout << c;

      c=sc;
      cout << c;
      }



};

int main()
{
    accesspecifier as;
    as.a=14;
    cout << as.a;
    as.printb();


    return 0;
}
*/
