# include <iostream>
using namespace std;
int main()
{
int i=0;    
int arr[10]={11,23,3,232,32,445,42,53,13,54,};
// printing elements in array
while(i<10){
    cout<<arr[i]<<endl;
    i++;
}
cout<<endl;
cout<<"now we start to print the address"<<endl;
int* p= arr;
// cout<<p<<endl;
// cout<<p+1<<endl;
// cout<<p+2<<endl;
// cout<<p+3<<endl;
// cout<<p+4<<endl;
// cout<<p+5<<endl;
// cout<<p+6<<endl;
// cout<<p+7<<endl;

for(int j=0;j<=9;j++,p++){
   cout<<p<<endl; 
}


return 0;
}