#include<iostream>

using namespace std;

int main(){
   
   int score;
   cout <<"what score do you think the film should get?"<< endl;
   cin >>score;

   switch(score){
      
      case 1:
      case 2:
      case 3:
         cout << "you think it is terrible" << endl;
         break ;
      case 4:
      case 5:
         cout << "youthink it is okay" << endl;
         break ;
      case 6:
      case 7:
         cout << "you think it is fantastic" << endl;
         break ;
      case 8:
      case 9 :     
      case 10:
         cout << "you think it is a masterpiece" << endl;
         break;
   }

   return 0;
}
//switch