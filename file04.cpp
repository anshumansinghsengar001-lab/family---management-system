#include<iostream>
using namespace std;
class Family{
    public :
      string name ;
      int age ;
      string gender;
      string responsibility;
      double salary ;

      Family(){
        cout<<"Hi, my name is Anshuman Singh. I am the Coder of my family ."<<endl;
      }

      void changeresponsiblity(string &newresponsiblity){
        cout<<"It's really need to change the responsibliyty of this person."<<endl;
      }
};

int main(){
    Family member1;
    member1.name = "Sarvendra Singh";
    member1.age = 42;
    member1.gender = "Male";
    member1.responsibility = "Earning ";
    member1.salary = 24000;

    cout<<"Name : "<<member1.name<<endl;
    cout<<"Age : "<<member1.age<<endl;
    cout<<"Gender : "<<member1.gender<<endl;
    cout<<"Responsibility : "<<member1.responsibility<<endl;
    cout<<"Salary : "<<member1.salary <<endl;

    Family member2;
    member2.name = "Sudha Singh";
    member2.age = 39;
    member2.gender = "female";
    member2.responsibility = "Cooking and managing home ";
    member2.salary = 2400;

    cout<<"Name : "<<member2.name<<endl;
    cout<<"Age : "<<member2.age<<endl;
    cout<<"Gender : "<<member2.gender<<endl;
    cout<<"Responsibility : "<<member2.responsibility<<endl;
    cout<<"Salary : "<<member2.salary <<endl;

    return 0;
}