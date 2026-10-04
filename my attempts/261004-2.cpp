#include<iostream>
#include<ctime>
using namespace std;

int main(){
    

    srand ((unsigned int)time(NULL) );

    int num = rand()%100 + 1;  
    //0~99  要求1~100，要加一

    
    int val;

    cout << "please input a number" << endl ;

    cin >> val;

    


    while (num!=val){

        
      
        if (val > num){
       
        cout << "too big" << endl;
    }

        else  {

        cout << "too small" << endl;
    }

        cout <<"try again" << endl;

        cin >> val;
   
   
   }


    cout << "congratulations!" << endl;



   
   return 0;
}
