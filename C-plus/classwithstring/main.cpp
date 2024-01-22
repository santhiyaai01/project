#include <iostream>

using namespace std;

class bankid
{
public:
    bankid()
    {
        string name;
        cout << "Enter the name:....";
        cin >> name;
        cout << "Hii..."<< name <<"Welcome Our bank";
}
bankid(int age)
{

}

};

int main()
{
    bankid bi;
    return 0;
}
