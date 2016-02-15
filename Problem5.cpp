//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
#include <iostream>
using namespace std;

bool isDiv(long int x);

int main()
{
    bool flag = false;
    for (long int i = 20; flag == false; i+=20)
        if (isDiv(i))
        {
          cout << i << endl;
          flag = true;  
        }
    return 0;
}

bool isDiv(long int x)
{
    if (!((x % 11) || (x % 12) || (x % 13) || (x % 14) || (x % 15) || (x % 16) ||
        (x % 17) || (x % 18) || (x % 19) || (x % 20)))
        {
        cout << "it's divisible" << endl;
        return true;
        }
    return false;
        
}