#include<iostream>
using namespace std;

class DemoClass{ // The Class itself
public : //Access Specifier
    int numDemo; //Attribute(int Variable)
    string nameDemo;//Attribute (string Variable)
};

//Main Method
int main(){
DemoClass demoObj; // creating object of DemoClass class

//Access and set value
demoObj.numDemo =108;
demoObj.nameDemo ="Jai Shree Ram";

//Printing to Console
cout<<demoObj.numDemo<<"\n";
cout<<demoObj.nameDemo;

return 0;
}
