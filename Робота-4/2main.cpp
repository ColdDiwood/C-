// Example program
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  double n1, n2, n3, n4 ,n5;
  cin>>n1>>n2>>n3>>n4>>n5;
  cout<<fixed<<(setprecision(1))<<n1<<endl;
  cout<<fixed<<(setprecision(2))<<n2<<endl;
  cout<<fixed<<(setprecision(6))<<n3<<endl;
  cout<<fixed<<(setprecision(2))<<n4<<endl;
  cout<<fixed<<(setprecision(0))<<n5<<endl;
  return 0;
}