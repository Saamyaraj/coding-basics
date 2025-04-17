#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;
    switch (age)
    {
    case 18:
    cout << "You are 18 years old." << endl;
        break;
    
    case 20:
        cout << "You are 20 years old." << endl;
        /* code */
        break;
    
    default:
    cout <<"you are dalit"<<endl;
        break;
    }
}