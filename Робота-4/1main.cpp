// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  bool answer;
  std::cin>>n;
  answer = (n>=0 && n<10) || (n*2<20 && n-2>-2) || (n-1>1 && n/2<10) || (n==111);
  cout<<(answer ? "Thats true :)" : "Thats not true :(")<<endl;
  return 0;
}
