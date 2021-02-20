#include<iostream>
using namespace std;
int main(){
int x=10,y=9000;
if(x>y){
    cout<<"True"<<endl;
}else{
cout<<"False"<<endl;
//C++ Short Hand If Else
//variable = (condition) ? expressionTrue : expressionFalse;
string value = (x>y)?"True":"False";
cout<<value<<endl;



}

return 0;
}
