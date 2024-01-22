#include <iostream>

using namespace std;

int main()
{
    int a,b,total,op,value,value1;
    cout << "Enter the value A:";
    cin >> a;
    cout << "Enter the value B:";
    cin >> b;
    cout << "Select the number for operator:";
    cin >> op;
    {

    switch(op)
    {
    case 1:
        total=a+b;
        cout << "\n Added value of A and B:" <<total;
        break;
    case 2:
        total=a-b;
        cout << "\n Subtract value of A and B:" <<total;
        break;
    case 3:
        total=a*b;
        cout << "\n Multiply value of A and B:" <<total;
        break;
    case 4:
        value=float(a/b);
        cout << "division value of A and B:" <<value;
        break;
    case 5:
        total=a%b;
        cout << "\n Modulas value of A and B:" <<total;
        break;
   case 6:
         a++;
        cout << "\n Increment value of A :" <<a++;
        break;
   case 7:
        b--;
        cout << "\n Decrement value of B:" <<b--;
        break;
   case 8:
        value1=a;
        cout << "\n Assign  value of total:" <<value1;
        break;
   case 9:
        a+=3;
        b+=5;
        cout << "\n Add Assign value is:" <<a << endl;
        cout << b;
        break;



    }
    return 0;
}
}
