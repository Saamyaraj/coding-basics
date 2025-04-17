#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if((age>18) && (age<1)){
        cout<<"You can access to party"<<endl;
    }
    else if(age==18){
        cout<<"you can get access to baccha party"<<endl;
    }
    else{
        cout<<"you can access to any kind of parties in the world"<<endl;
    }
    
}