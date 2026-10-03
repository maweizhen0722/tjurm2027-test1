#include<iostream>

using namespace std;

int main(){
    
   int score;
    cout << "enter your score: ";
    cin >> score;
    cout << "your score is " << score << endl;
     
   
    if (score >= 600){
       cout << "your level is A" << endl;
   
      if (score >= 700){
         cout << "you are admitted into pku" << endl;
      }

      else if (score >= 650){
         cout << "you are admitted into tsinghua" << endl;
      }
     
      else {
         cout  << "you are admitted into tju" << endl; 
      }
   
   }
   
   
   else if (score >= 500) {
      cout << "your level is B" << endl;
   }
  
   else if (score >= 400){
      cout << "your level is C "<< endl;
   } 
   
   else{      
      cout << "your level is D " << endl;
   }
   

   return 0;
}
