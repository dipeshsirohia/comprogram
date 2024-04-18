# include <iostream>
using namespace std;
int main()
{
int a=12;
int* b=&a;
cout<<b<<endl;
cout<<&a<<endl;
cout<<a<<endl;
cout<<*b<<endl;

// pointer to pointer
cout<<"pointer to pointer"<<endl;
int** c=&b;
cout<<c<<endl;
cout<<&b<<endl;
cout<<*c<<endl;
cout<<**c<<endl;
return 0;
}