 #include<iostream>
using namespace std;
int main(){
int x;
cout<<"Enter the array size";
cin>>x;

int arr[x];
for(int i=0; i<x; i++){
    cin>>arr[i];
}
int min=arr[0];
for(int i=1; i<x; i++){
     if(min>arr[i]) min=arr[i];
}
cout<<"Mix element is :"<<min;


return 0;
}