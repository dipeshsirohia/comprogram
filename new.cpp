# include <iostream>
using namespace std;
int main()
{
int a;    
cout<<"enter the number"<<endl;
cin>>a;
string words[]={"one ","two","three","four","five","six","seven","eight"};
cout<<words[a-1];
return 0;
}