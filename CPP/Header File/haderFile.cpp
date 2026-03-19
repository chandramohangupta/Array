#include<iostream>
#include<fstream>
using namespace std;
int main(){

    // file ko open karna  
    ofstream  mohan;

    mohan.open("ram.txt");// file ko create karna 

    // file write karna 
    mohan<<" hii mohan ";
     mohan<<" hii sohan ";
      mohan<<" hii raj ";
       mohan<<" hii jjinnat ";

    mohan.close();



return 0;
}