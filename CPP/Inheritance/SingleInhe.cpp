#include<iostream>
using namespace std;
class father {
    public:
void car(){
cout<<"father of car ";
}
};
class child : public father {
    void laptop(){
        cout <<"me laptop";
    }
};
int main(){
    child c;
    c.car();
return 0;
}