#include <iostream>
using namespace std;

bool isPrime(int x);

int main()
{
    //accounts for 2 being the first prime
    long int sum = 2;
    for (int i = 3; i < 2000000; i +=2)
    {
        if (isPrime(i))
            sum += i;
    }
    cout << sum << endl;
}









bool isPrime(int x)
{
    if ((x % 2)==0)
        return false;
    
    for(int i = 3; i < x/2; i += 2)
    {
        if ((x % i) == 0)
           return false;
    }
    return true;
}