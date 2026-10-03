#include<iostream>

using namespace std;

int main(){
 
    int a,b,c;
    a=10;
    b=20;
    c=0;

    c =(a > b ? a : b)  ; 
    cout << "c is:" << c<< endl;

    (a < b ? a : b)= 100;

    cout << "a is:" << a<< endl;
    cout << "b is:" << b<< endl;


   return 0;
}
//三目运算符