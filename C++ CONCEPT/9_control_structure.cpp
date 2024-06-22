#include <iostream>
// IF ELSE STATEMENT, SWITCH CASE STATEMENT
using namespace std;

int main(){

   cout<<"This is tutorial 9"<<endl;
   int age;
   cout<<"Enter your age:  ";
   cin>>age;
   if(age<18){
      cout<<"You can not come to my party"<<endl;
   }
   else if(age == 18){
      cout<<"You can come to party for short period of time"<<endl;
   }
   else{
      cout<<"You can come to party till party gets over"<<endl;
   }

   switch(age){
      case 18:
      cout<<"Your age is 18"<<endl;
      break;
      case 19:
      cout<<"Your age is 19"<<endl;
      break;
      case 20:
      cout<<"Your age is 20"<<endl;
      break;
      default:
      cout<<"No Special Case"<<endl;
      break;
   }
   cout<<"DONE WITH SWITCH CASE";

   return 0;
}

// C++ BASIC CONTROL STRUCTURE
/*
1. Sequence Structure:--
   step a: entry
   step b: action 1
   step c: action 2
   step d: exit
2. Selection Structure:--
   step a: entry 
   steb b: condition
   step b.1: true 
   step b.2: false
   step c.1: action 1
   step c.2: action 2
3. Loop Structure
   step a: entry 
   steb b: condition
   step b.1: true 
   step b.2: false
   step c.1: action 1
   step c.2: action 2
*/
// hello world