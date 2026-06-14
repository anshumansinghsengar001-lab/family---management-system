#include<iostream>
#include<vector>
using namespace std ;
int main (){
    vector<string>students = {"Rahul", "Suresh", "Mohan", "Aditiya", "Sarvendra"};
    students.push_back("Anshuman");
    students.push_back("Sudha");
    students.push_back("Mahima");
    students.push_back("Radhika");
    students.push_back("Kalyani");
    students.push_back("parvati");
        int size = students.size();
    for(int i = 0 ; i< size; i++ ){
        cout<<"Students Name :"<<students[i]<<endl;
    }
    students.pop_back();
    cout<<"Vecter Size : "<<students.size()<<endl;
    cout<<"Front value of the vector :"<<students.front()<<endl;
    cout<<students.at(0)<<endl;
    cout<<students.at(1)<<endl;
    cout<<students.at(2)<<endl;
    cout<<students.at(3)<<endl;
    return 0;
}