#include<iostream>
using namespace std;
int main(){
/*int var =10;
int *varPointer =&var;

cout<<varPointer<<endl;
*/
int var = 5;
int* pointVar;


// assign address of var
pointVar = &var;

// change value at address pointVar
*pointVar = 1;

cout << var << endl; // Output: 1

}
