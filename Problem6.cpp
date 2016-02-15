//Find the difference between the sum of the squares of the 
//first one hundred natural numbers and the square of the sum.
#include <iostream>
using namespace std;

int sum_of_squares(int x);

int sqaure_of_sum(int x);

int main()
{
   int difference;
   
   int square = sqaure_of_sum(100);
   int sum = sum_of_squares(100);
   
   difference = square - sum;
   
   cout << difference << endl;
   return difference;
}

int sqaure_of_sum(int x)
{
    int sum = 0;
    for (int i = 0; i < x+1; i++)
        {
            sum += i;
        }
    return sum*sum;
        
}

int sum_of_squares(int x)
{
    int sum = 0;
    for (int i = 0; i < x+1; i++)
        {
            sum += i*i;
        }
    return sum;
}