// Example program
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  int n1, n2;
  cout<<"enter the first number:"<<std::endl;
  cin>>n1;
  cout<<"enter the second number:"<<std::endl;
  cin>>n2;
  float epsilon = 0.000001;
  float res1=1.0f/static_cast<float>(n1);
  float res2=1.0f/static_cast<float>(n2);
  if(fabs(res1-res2)<epsilon)
  {
      cout<<"Results are equal (by 0.000001 epsilon)"<<endl;
  }
  else
  {
    cout<<"Results are not equal (by 0.000001 epsilon)"<<endl;  }
  return 0;
}