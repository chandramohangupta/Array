// 0or 1 is not a prime no
// one tuests
// divisible only 1 and self
 #include<iostream>
 using namespace std;
 int main(){
 int n;
 cout<<"Enter the Value : ";
 cin>>n;
 if(n<2)
 {
    cout<<n<<" is Not Prime"<<endl;
    return 0;
 }
else
{
     for(int i=2; i<n; i++)
     {
    if(i%n==0)
    {
        cout<<n<<" is No is not prime "<<endl;
         return 0;
    }  
    }
 cout<<n<<" is Prime No"<<endl;
 return 0;
}
}