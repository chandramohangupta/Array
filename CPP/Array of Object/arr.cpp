#include<iostream>
using namespace std;
class Student{
public:
string name;
int IdCard;
 
void getdata(){
    cout<<"Enter the Name  OR idCard : ";
    cin>>name>>IdCard;
    
}
void showdata(){
    cout<<"Name = "<<name<<endl;
    cout<<"IdCard = "<<IdCard<<endl;
}
};
int main(){
    Student s1[10];
    for(int i=0; i<2; i++){
        s1[i].getdata();
    }
    for(int i=0; i<2; i++){
        s1[i].showdata();
    }
 
return 0;
}