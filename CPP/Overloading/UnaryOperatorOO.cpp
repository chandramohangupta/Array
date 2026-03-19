#include<iostream>
using namespace std;
class sample{
    public :
    int a,b;

   void getdata(int x, int y){
    a= x;
    b=y;
   }
   void showData(){
     cout<<"a= "<<a;
     cout<<"b= "<<b;
   }
 
   void operator -(sample s){
    a= a-s.a;
    b= b-s.b;
   }

};
int main(){
    sample s1, s2;
    s1.getdata(60,34);
    s2.getdata(40,96);
    s1-s2;
    s1.showData();

return 0;
}