# include <iostream>
using namespace std;
int main()
{
int n,m;
for(int i=1;2>1;i++){   
cout<<"enter the number"<<endl;
cin>>n;
cin>>m;
if(n<=9){
    string words[]={"one","two","three","four","five","six","seven","eight","nine"};
    cout<<words[n-1]<<endl;
    }
 else if(n>9){
    cout<<"nine"<<endl;}

    if(m<=9){
    string words[]={"one","two","three","four","five","six","seven","eight","nine"};
    cout<<words[m-1]<<endl;
    }
    
 else if(m>9){
    cout<<"nine"<<endl;
 }  
 if(n%2==0){
    cout<<"even"<<endl;
 } 
 if(n%2!=0){
    cout<<"odd"<<endl;
 }



  
 if(m%2==0){
    cout<<"even"<<endl;
 } 
 if(m%2!=0){
    cout<<"odd"<<endl;
 }
}
return 0;
}