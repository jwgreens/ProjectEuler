//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//What is the 10,001st prime number?
#include <iostream>
using namespace std;

bool isPrime(int x);

int main()
{
    //the 6th prime is 13
    //because we check if 13 is prime first,
    //we increment num to be 6 after the check has passed
    int num = 5;
    int prime = 0;
    for (int i = 13; num < 10001; i += 2)
    {
       if (isPrime(i))
       {
           num++;
           prime = i;
       } 
    }
    cout << num << " " << prime << endl;
    return 0;
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