#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x,y;
    double z;
    cin>> x>> y ;
    z=x/y;
    cout<<"floor " << x <<" / "<<y<<" = "<<floor(z)<<endl;
    cout<<"ceil " << x <<" / "<<y<<" = "<<ceil(z)<<endl;
    cout<<"round " << x <<" / "<<y<<" = "<<round(z)<<endl;

    return 0;
}
