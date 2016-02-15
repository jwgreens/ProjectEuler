//By considering the terms in the Fibonacci sequence whose values do not exceed four million,
//find the sum of the even-valued terms.
#include <iostream>
using namespace std;

int main()
{
   int sum = 0;
   int current_Fib = 1, fib_Minus_One = 1, fib_Minus_Two = 1, temp_Fib;
   while (current_Fib < 4000000)
   {   
       current_Fib = fib_Minus_One + fib_Minus_Two;
       fib_Minus_Two = fib_Minus_One;
       fib_Minus_One = current_Fib;
       if (!(current_Fib % 2))
            sum += current_Fib;
   }    
   cout << sum << endl;
   return sum;
}
