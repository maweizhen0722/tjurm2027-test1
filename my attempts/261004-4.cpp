#include<iostream>

using namespace std;

int main(){
    
    int num = 99;

    while (num<999){
        num++ ;
    
  
    int a =num/100;
    int b =(num/10)%10;
    int c =num %10;

    if (a*a*a+b*b*b+c*c*c== num ){
        cout << num << endl;
    }
    
    //if 不一定搭配else使用


    }
    
   system ("pause");
   
   return 0;
}
