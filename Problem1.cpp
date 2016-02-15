//Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream>
using namespace std;

int main() 
{
  int sum = 0;
  for (int i = 0; i < 1000; i++) 
  {
    if(!(i % 5 && i % 3))
        sum += i;
  }
  cout << sum << endl;
  return sum;
}