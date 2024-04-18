# include <iostream>
using namespace std;
int main()
{
// int i;
// for(i=1;i<=10;i++)
// {
//     cout<<i<<endl;
// }
int i;
// while (i<=100)
// {
//     cout<<i<<endl; 
//     i++;
// }


// do
// {
//   cout<<i<<endl; 
//   i++; 
// } while (i<=100);

//***********multiplication table************
int j=1;
cout<<"enter the no. which you want table"<<endl;
cin>>i;
do
{
    cout<<i<<"*"<<j<<"="<<i*j<<endl;
    j++;

} while (j<=10);

return 0;
}