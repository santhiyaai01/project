#include <iostream>

using namespace std;

namespace person
{
    string name="santhiya";
}
namespace person1
{
    string name="ammu";
}
namespace person2
{
    string name="jo";
}
using namespace person;

int main()
{
    cout << name << endl;
    cout << person1::name<< endl;
    cout << person2::name<< endl;
    return 0;
}
