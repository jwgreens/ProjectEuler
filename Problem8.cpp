//Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    long int product = 1;
    long int max_product = 1;
    int starting_position = 0;
    ifstream ifs ("BigNum.txt");
    vector<int> myvector;
    char c;
    while (ifs >> c)
        myvector.push_back (c - '0');
    
    for(int i = 0; i < 987; i++)
    {
       for (int j = i; j < i + 13; j++)
       {
           product *= myvector[j];   
       }
       
       if (product >= max_product)
       {
           max_product = product;
           starting_position = i;
       }
       
       product = 1;
    }
    cout << max_product << endl;
    cout << starting_position << endl;
    return 0;
}

