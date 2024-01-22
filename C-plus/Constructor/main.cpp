#include<iostream>
using namespace std;

class votingCheck{
public:
   void checkage()
   {

        int age;
       if (age >= 18 ){
            cout << "\n you are eligible to vote";
        }
       else{
        cout << "\n you are not eligible to vote";
      }

  }

  void checkage(int age)
  {

       if (age>=18)
        {
            cout << "\n you are eligible to vote output by second constructor";
        }
       else{
        cout << "\n you are not eligible to vote output by second constructor";
      }

  }

};


int main()
{

    votingCheck vc;
      int age;
       cout << "\n\n enter your Age for first constructor \t";
       cin >> age;
    vc.checkage();
         vc.checkage(20);
}












/*
// constructor
// default
#include<iostream>
using namespace std;

class votingCheck{
public:
   votingCheck(){
       int age;
       cout << "enter your Age for first constructor \t";
       cin >> age;
       if (age < 18 ){
            cout << "you are eligible to vote";
        }
       else{
        cout << "you are not eligible to vote";
      }

  }

  votingCheck(int age){

       if (age>=18 ){
            cout << "you are eligible to vote output by second constructor";
        }
       else{
        cout << "you are not eligible to vote output by second constructor";
      }

  }

   void checkage(int age){
      if (age>=18 ){
            cout << "\n Welcome to function";
        }
      else{
        cout << "you are mistaken";
      }

  }


};


int main(){


    votingCheck vc;
    int age;
       cout << "\n\n enter your Age for second constructor  \t";
       cin >> age;

    votingCheck vc1(age);
    vc.checkage(26);



return 0;
}
*/
