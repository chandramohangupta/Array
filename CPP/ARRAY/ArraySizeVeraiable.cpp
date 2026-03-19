// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter the Size of array : ";
// cin>>n;

// int arr[n];
// for(int i=0; i<=n-1; i++){
//     cin>>arr[i];
// }

// for(int i=0; i<=n-1; i++){
//     cout<<arr[i]<<" ";
// }

// return 0;
// }

// all elements thhhhe summ 
#include<iostream>
using namespace std;
int main(){
     
    int arr[3];
    for(int i=0; i<3; i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0; i<3; i++){
        sum=sum+arr[i];
    }
     cout<<sum;

return 0;
}