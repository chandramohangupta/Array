#include<iostream>
using namespace std;
template  < class t1,class t2>
class sample{
    public:
    t1 a;
    t2 b;
     void getD(){
        cout<<"Enter the a&b";
        cin>>a>>b;
     }
     void showD(){
        cout<<"A ="<<a<<endl;
        cout<<"B = "<<b<<endl;

         
     }
};
int main(){
sample <int , int> b1;
b1.getD();
b1.showD();

return 0;
}