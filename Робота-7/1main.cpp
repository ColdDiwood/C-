#include <iostream>
using namespace std;

int main()
{
    int c0;
    cin>>c0;
    if (c0<=0)
    {
        cout<<"Число менше нуля";
        return 0;
        }
    while (c0 != 1) {
        if (c0 % 2 == 0) {
            c0 = c0 / 2;
        } else {
            c0 = 3 * c0 + 1;
        }
        cout << c0 << " ";} 
    return 0;
}