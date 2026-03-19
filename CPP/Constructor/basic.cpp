#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    int id;
    int phoneNo;
    student(string name,int roll,int id,int phoneNo){
        this->name=name;
        this->id=id;
        this->phoneNo=phoneNo;
        this->roll=roll;
    }
     void print(){
        cout<<name<<" "<<id<<" "<<phoneNo<<" "<<roll<<endl;
     }

};
int main(){
    student s("Ram", 7886876, 89767675675, 78);
    s.print();

return 0;
}