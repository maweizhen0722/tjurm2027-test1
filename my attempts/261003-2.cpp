#include<iostream>

using namespace std;

int main(){
    
   int num1,num2,num3;    //3 numbers in a time
   
   cout <<" enter number1 : "; 
    //<< endl dispear in a time
   cin >> num1;

   cout <<"enter number2 :";   
   cin >>num2;

   cout <<"enter number3: ";
   cin >>num3;


   cout <<"the three numbers are:"
   << num1<<num2<<num3<<endl;




   if (num1>num2&&num1>num3){
      cout << "the maximum number is :"<< num1;
   }

   else if (num2>num1&&num2>num3){
      cout <<"the maximum number is ;"<< num2;
   }

   else if (num3>num1&&num3>num2){
      cout <<"the maximum number is ;"<< num3;
   }



   
   return 0;

}
//to get the maximum of three numbers