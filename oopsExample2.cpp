#include<iostream>
using namespace std;
class Car{ // The Class itself
public :   //Access Specifier
    int year;//Attribute(int Variable)
    string model; //Attribute (string Variable)
    string color; //Attribute (string Variable)
};


int main(){
    Car carObj;// creating object of Car class
    carObj.year=2021;
    carObj.model="Audi";
    carObj.color="Red";

//Print
cout<<carObj.year<<"\n";
cout<<carObj.model<<"\n";
cout<<carObj.color<<"\n";
};
