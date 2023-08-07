#include <iostream>
using namespace std;

int main()
{
 
   int a,b;
   
   cout<< "Enter the value of A " <<endl;
   cin>> a;
   
   cout<< "Enter the value of B" <<endl;
   cin>> b;
   
   char ex;
   cout<<"Enter the expression you want " <<endl;
   cin>> ex;
   
   switch( ex ){
   case '+' : cout<< (a+b) <<endl;
   break;
   
    case '-' : cout<< (a-b) <<endl;
   break;
   
    case '*' :cout<< (a*b) <<endl;
   break;
   
    case '/' :cout<< (a/b) <<endl;
   break;
   
    case '%' : (a%b);
   break;
   
   default: "Please enter the correct value" ;
}
   
   return 0;
}