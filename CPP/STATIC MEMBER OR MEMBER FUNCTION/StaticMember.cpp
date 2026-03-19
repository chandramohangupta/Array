#include<iostream>
using namespace std;
class customer{
          // toal_customer =0;
    // A1 : name, acc_no , balance
    // A2 : name, acc_no , balance
    string name;
    int acc_no, balance;
     static int total_customer;
    public:
    customer(string name, int acc_no, int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
        total_customer++;
    }
    void print(){
        cout<<name<<" "<<acc_no<<" "<< balance <<" "<<total_customer<<endl;
    }

    
};

  int customer::total_customer=0;


int main(){
    customer c1("Mohan", 7878687, 9000);
    c1.print();
    customer c2("aman ", 89789789, 3000);
    c2.print();
    customer c3("bahn ", 78676778, 20000);
    c3.print();

return 0;
}