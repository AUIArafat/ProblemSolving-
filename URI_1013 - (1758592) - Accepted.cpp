#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int y,a,b,x,c;
    cin>>a>>b>>c;
    x=(a+b+abs(a-b))/2;
    y=(x+c+abs(x-c))/2;
    cout<<y<<" eh o maior"<<endl;
    return 0;
}
