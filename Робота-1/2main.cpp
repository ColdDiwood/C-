// Example program
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
   double a=1, b=12.21, result=0;
   result = (0.81*sqrt(sqrt(a))-(1/2.125)*sqrt(sqrt(b)))*exp(a);
   cout << result;
}