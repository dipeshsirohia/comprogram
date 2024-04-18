# include <iostream>
using namespace std;
union dealer{
    int d1;
    char g;
    
     
};
int main()
{
    union dealer nm;
    nm.d1=34;

    cout<<nm.d1<<endl;

return 0;
}