#include<iostream>
using namespace std;
int add(int a, int b);

class sum{
    public:
    void  addition(){
        int x, y;
        cout<<"Enter the Value";
        cin>>x>>y;

        int ans= add(x,y);
        cout<<"Ans ="<<ans;
    }
};
int add(int a, int b){
    return a+b;
}


int main(){
sum s1;
s1.addition();
return 0;
}