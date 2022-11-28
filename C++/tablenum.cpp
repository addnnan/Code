#include <iostream>
using namespace std;
int main()
{
   int num;
   cout << "Type a number to display it's table:::" <<endl;
   cin>> num;
   int i;
   for ( i = 1; i <= 10; i++){
    int result = num * i;
    cout << num << " x " << i << " = " << result;
    cout << endl;
   }
   return 0;

}