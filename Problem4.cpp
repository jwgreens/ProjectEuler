//Find the largest palindrome made from the product of two 3-digit numbers.
#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

bool isPalindrome(int x);

int main()
{
    int largest_Palindrome;
    int x, y, x_large, y_large;
    for (x = 800; x < 1000 ; x++)
    {
        for (y = 800; y < 1000; y++)
        {
            if (isPalindrome(x*y))
            {
                largest_Palindrome = x*y;
                x_large = x;
                y_large = y;
            }
        }
    }
    cout << "The largest palindrome is " 
    << largest_Palindrome << " using "
    << x_large << " and " << y_large  << endl;
    return 0;
}

bool isPalindrome(int x)
{
   stringstream ss;
   string str;
   ss << x;
   ss >> str;
   if(equal(str.begin(), str.begin() + str.size()/2, str.rbegin()))
   {
       return true;
   }
   return false;
}