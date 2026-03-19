#include<iostream>
using namespace std;
class StudentData{
public:
int name;
int rollNo;
int IdCard;
int phoneNo;
string section;
double CGPA;
string collOrUnivercityName;
string branch;

void getdata(){
    cout<<"Enter the Name, RollNo ,IdCard , phoneNo , section , CGPA , CollageOR university Name and branch ";
    cin>>name>>rollNo>>IdCard>>phoneNo>>section>>CGPA>>collOrUnivercityName>>branch;
    
}

void showdata(){
    cout<<"Name = "<<name;
    cout<<"Roll No = "<<rollNo;
    cout<<"Id Card= "<<IdCard;
    cout<<"phone No= "<<phoneNo;
    cout<<"Section= "<<section;
    cout<<"CGPA= "<<CGPA;
    cout<<"Collage OR Unioversity name = "<<collOrUnivercityName;
    cout<<"Branch= "<<branch;

}

};
int main(){
    StudentData s1[10];
    for(int i=0; i<2; i++){
        s1[i].getdata();
    }
    for(int i=0; i<2; i++){
        s1[i].showdata();
    }
return 0;
}