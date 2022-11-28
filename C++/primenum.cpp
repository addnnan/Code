#include <iostream>
using namespace std;
int main()
{
    int number, t = 0;
    cout << "Enter a number that you want to check if it's prime number or not" << endl;
    cin >> number;
    for(int i = 2; i < number; i++){
    if (number % 2 != 0)
    {
        t++;
    }
    }
    if(t == 1){
        cout << number << " is a prime number " << endl;
    } 
    else 
    {
        cout << number << " is a composite number" << endl;
    }
    return 0;
}