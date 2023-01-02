#include <iostream>
#include <iomanip>

using namespace std;
const double x = 3.141592653 ;
int main()
{
    float inputR;
    cin>>inputR;
    double reslut=inputR * inputR * x;
    cout << fixed << setprecision(9) ;
    cout << reslut<<endl;

    return 0;
}
