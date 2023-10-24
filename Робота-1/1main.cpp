// Example program
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
   double a=10, b=0.5, result=0;
   result = (0.314*exp(a)-0.512*exp(b))/(sin(b/3*3.14))*log(a);
   cout << result;
}