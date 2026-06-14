#include<iostream>
using namespace std;
class KPIT{
    public :
    string name;
    string age;
    string dept;
    double salary ; 
    KPIT(){
        cout<<"Hi,My Name is Anshuman Singh."<<endl;
    }
    void changesalary(double newsalary){
         double salary = newsalary ;
         cout<<"New Salary : "<< salary << endl;
    }

    
};
int main (){
    KPIT golu;
    golu.name = "Aditiya Singh Sengar";
    golu.age = "25";
    golu.dept = "Software Development";
    golu.salary = 200000000000;

    cout<<"Name : "<<golu.name<<endl;
    cout<<"Age : "<<golu.age<<endl;
    cout<<"Dept : "<<golu.dept<<endl;
    cout<<"Salary :"<<golu.salary<<endl;
    double newsalary = 50000000000;

    golu.changesalary(newsalary);
    return 0;
}