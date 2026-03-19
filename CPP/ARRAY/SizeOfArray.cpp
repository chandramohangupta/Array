#include<iostream>
using namespace std;
int main(){
    int arr[]={22,45,23,556,67,54,34556,77,5456,66,7,545,345,454,34,564,566,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<=n-1; i++){
        cout<<arr[i]<<"   ";
    }

return 0;
}