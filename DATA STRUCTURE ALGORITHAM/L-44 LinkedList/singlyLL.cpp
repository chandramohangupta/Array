#include<iostream>
using namespace std;
class node{
    public :
    int data;
    node *next;
// constructor using
    node (  int data){
        this->data=data;
        this->next=next;
    }
};
int main(){
node* n1 =new node(10);
cout<<n1->data<<endl;
cout<<n1->next<<endl;

node* n2 =new node(12);
cout<<n2->data<<endl;
cout<<n2->next<<endl;
return 0;
}