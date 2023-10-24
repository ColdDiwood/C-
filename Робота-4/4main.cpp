// Example program
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  int n1, n2, n3, n4;
  cin>>n1>>n2>>n3>>n4;
  if (n1>=1 && n1<=255 && n2>=1 && n2<=255 && n3>=1 && n3<=255 && n4>=1 && n4<=255)
  {
      cout<<n1<<"."<<n2<<"."<<n3<<"."<<n4<<endl;}
  else {
      cout<<"one or more numbers are not in the valid range (1-255)"<<endl;}
  return 0;
}