#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    //Typecasting//

    int a=45;
    float b=45.46;

    cout<<"the value of a is: " << float(a)<<endl;
    cout<<"the value of a is " << (float)a<<endl;

    cout<<"the value of b is " <<int(b)<<endl;
    cout<<"the value of b is " <<(int)b<<endl;

    //Reference Variable//

    float x=455;
    float & y=x;
    cout<<"the value of y is: " <<y<<endl;
    cout<<"the value of x is:"<<setw(5)<<x<<endl;


}