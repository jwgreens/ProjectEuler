//There exists exactly one Pythagorean triplet for which a + b + c = 1000.
//Find the product abc.
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    bool flag = false;
    int c;
    for (int a = 1; a < 1000; a++)
    {
        for (int b = 1; b < 1000; b ++)
        {
            if ((a + b + sqrt(a*a + b*b)) == 1000)
            {
                c = sqrt(a*a + b*b);
                cout << a << " " << b << " " << c << endl;
                cout << a*b*c << endl;
                flag = true;
            }
        }
        
    if (flag == true)
    {
       break;
    }
    
    }
    return 0;
}