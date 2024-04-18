# include <iostream>
using namespace std;
// here we make struct
// struct student{
//     string name;
//     int roll_no ;
//     int year;
//     int semester;
//     float fees;
//     char section;

// };
// int main()
// {
//      struct student dipesh;
//      dipesh.name="dipesh";
//      dipesh.roll_no=21102211;
//      dipesh.year=2;
//      dipesh.semester=4;
//      dipesh.fees=40000;
//      dipesh.section='A';
//      cout<<dipesh.name<<endl;
//      cout<<dipesh.roll_no<<endl;
//      cout<<dipesh.fees<<endl;
//      cout<<dipesh.section<<endl;
//      cout<<dipesh.semester<<endl;
//      cout<<dipesh.year<<endl;
    //  using strut in typedef
typedef struct student{
    string name;
    int roll_no ;
    int year;
    int semester;
    float fees;
    char section;

}sd;
int main()
{
     sd dipesh;
     dipesh.name="dipesh";
     dipesh.roll_no=21102211;
     dipesh.year=2;
     dipesh.semester=4;
     dipesh.fees=40000;
     dipesh.section='A';
     cout<<dipesh.name<<endl;
     cout<<dipesh.roll_no<<endl;
     cout<<dipesh.fees<<endl;
     cout<<dipesh.section<<endl;
     cout<<dipesh.semester<<endl;
     cout<<dipesh.year<<endl;    
    cout<<"using strut in typedef"<<endl;



     

return 0;
}