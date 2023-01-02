#include <iostream>

using namespace std;

int main()
{
    int a,b,c,maxx,minn;
    cin>> a>>b >>c;
    if(a>=b && a>=c) {
        maxx=a;
    }else if(b>=a && b>=c ){
        maxx=b;
    }else{
        maxx=c;
    }
    if(a<=b && a<=c) {
        minn=a;
    }else if(b<=a && b<=c ){
        minn=b;
    }else{
        minn=c;
    }
    cout<<minn<< " "<<maxx<<endl;

    return 0;
}
