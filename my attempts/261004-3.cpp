#include<iostream>

using namespace std;

int main(){
    
    int num = 0;

    while (num<999){
        num = num + 1 ;
    
  
    int a =(num/100);
    int b =(num-a*100)/10;
    int c =(num-a*100-b*10);

    if (((a*a*a+b*b*b+c*c*c)== num )&&a>0){
        cout << num << endl;
    }
    



    }
    
   system ("pause");
   
   return 0;
}
