#include<iostream>
using namespace std;
class ABC{
    public:
    const  int a;
    ABC (int y) : a(y)
    {
        cout<<" The value of y : "<< y<<endl;

    }



};
int main(){
    ABC obj(100);
    cout<<" The value is constant data member a is  "<<obj.a<<endl;
    


return 0;
}