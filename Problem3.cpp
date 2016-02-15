//What is the largest prime factor of the number 600851475143 ?
#include <iostream>
using namespace std;

bool isPrime(int x);

int main()
{
    long int prime = 0;
    long int num = 600851475143;
    for (int i = 3; i*i <= num; i += 2)
        {   
            if (isPrime(i) && (num % i) == 0)
            {
                prime = i;              
                num /= i;
            }     
        }
    cout << max(prime, num) << endl;
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