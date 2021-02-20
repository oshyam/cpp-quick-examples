#include<iostream>
#include<string>
using namespace std;
int main(){
//string variable
string myName = "Hello My Name is Ben 10";
//string variable
string myAddress = " and I live USA";
//cout<<myName+myAddress<<endl;
//we can append or add with append() function using string preprocessor
cout<<myName.append(myAddress)<<endl;
//string length using length() or size() function
string user="demo";
cout<<"The length of user is "<<user.length()<<endl;
//We can access the characters in a string by referring to its index number inside square brackets [].
cout<<user[2]<<endl;
//Change String Characters
string userGreet = "Hello";
userGreet[0] = 'Y';// Always use single quote to change the value
cout<<userGreet<<endl;


}

