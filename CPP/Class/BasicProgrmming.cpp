#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int IDNo;
    int phoneNo;
};
int main(){
    student s1,s2;
    s1.name="moahn Gupta ";
    s1.phoneNo=9788686;
    s1.IDNo=87678;
    cout<<"Name : "<<s1.name<<endl;
     cout<<"Mobile No : "<<s1.phoneNo<<endl;
     cout<<"IdCard : "<<s1.IDNo<<endl;
       

  cout<<"-----------------------s2-------------------------"<<endl;
    s2.name="Sohan Gupta";
    s2.phoneNo= 98979878;
    s2.IDNo= 87786767;

     cout<<"Name : "<<s2.name<<endl;
      cout<<"Mobile No : "<<s2.phoneNo<<endl;
     cout<<"IdCard : "<<s2.IDNo<<endl;





return 0;
}