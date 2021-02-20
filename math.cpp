#include<iostream>
#include<cmath>
/*functions, such as sqrt (square root),
round (rounds a number)
and log (natural logarithm),
can be found in the <cmath> header file:*/
using namespace std;


int main(){
//The max(x,y) function can be used to find the highest value of x and y:
int x=10,y=25;
cout<<"Max Value b/w "<<x <<" and "<<y<<" is "<<max(10,25)<<endl;
//The min(x,y) function can be used to find the lowest value of x and y:
cout<<"Min Value b/w "<<x <<" and "<<y<<" is "<<min(10,25)<<endl;
//squareroot
cout<<sqrt(625)<<endl;
//round
cout<<round(4.8)<<endl;
//log
cout<<log(2)<<endl;
//cube root
cout<<cbrt(27)<<endl;
}
