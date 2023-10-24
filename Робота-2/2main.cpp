// Example program
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
   int x, y;
   cin>>x >>y;
   if (x<=1 && x>=0 && y<=0 && x>=0){
       cout<<"WIN";
   }
   else if (x<=0 && x>=-1 && y<=1 && y>=0){
       cout<<"WIN";
   }
   else {
       cout<<"LOOSE";
   } 
   
}