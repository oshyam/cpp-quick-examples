#include<iostream>
using namespace std;
int main(){


int arrayNumber[5] = {1,2,3,4,5};
cout << arrayNumber[4]<<endl;
string arrNames[5] = {"Ram","Sam","Mohan","Kunwar","alias"};
cout << arrNames[1]<<endl;
//Looping through an array
for(int i=0;i<=5;i++){
    cout<<i<<arrNames[i]<<endl;
}
return 0;
}
