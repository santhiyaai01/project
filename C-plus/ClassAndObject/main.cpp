#include <iostream>

using namespace std;

class FirstClass
{
    public:
    int a=5;

    void multiply()
    {
        int x,y,z;

        cout<<"\n Value for x:";
        cin>>x;
        cout<<"\n Value for y:";
        cin>>y;
        z=x*y;
        cout<<"\n Value of multiply z:"<<x*y;
    }
    void subraction();
};
void FirstClass::subraction()
{
    int d,e,f;

    cout<<"\n Value for d:";
    cin>>d;
    cout<<"\n Value for e:";
    cin>>e;
    f=d-e;
    cout<<"\n Value of subtraction f:"<<d-e;


}
int addition ()
{
    int a,b,c;
    cout<<"\n Value for a:";
    cin>>a;
    cout<<"\n Value for b:";
    cin>>b;
     c=a+b;
    cout<<"\n Value of addition c:"<<a+b;
    return 0;
}

int division()
{
    float g,h;
    cout<<"\n Value for g:";
    cin>>g;
    cout<<"\n Value for h:";
    cin>>h;
    float i=(float)g/h;
    cout<<"\n Value of division i:"<<g/h;
    return 0;
}


int modulas()
{
    int j,k,l;
    cout<<"\n Value for j:";
    cin>>j;
    cout<<"\n Value for k:";
    cin>>k;
      l=j%k;
    cout<<"\n Value of modulas l:"<<j%k;
    return 0;
}

int main()
{

    FirstClass fc;
    cout<<fc.a;
    fc.multiply();
    fc.subraction();
    addition();
    division();
    modulas();
    return 0;
}

