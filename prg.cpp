# include <iostream>
using namespace std;
int main()
{
int a,b;    
cout<<"enter the a"<<endl;
cin>>a;
cout<<"enter the b"<<endl;
cin>>b;
if(a%2==0){
    cout<<"the a is even"<<endl;}
 if(a>9){
    cout<<"a i greater than nine"<<endl;}
    if(a<9){
        switch (a)
        {
        case 1:cout<<"one"<<endl;
        break;
        case 2:cout<<"two"<<endl;
        break;
        case 3:cout<<"three"<<endl;
        break;
        case 4:cout<<"four"<<endl;
        break;
        case 5:cout<<"five"<<endl;
        break;
        case 6:cout<<"six"<<endl;
        break;
        case 7:cout<<"seven"<<endl;
        break;
        case 8:cout<<"eight"<<endl;
        break;
        case 9:cout<<"nine"<<endl;
        break;

        }
    }
 
return 0;
}