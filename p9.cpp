#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    for(int c = 1; c < 1000; c++)
        for(int b = 1; b < c; b++)
            for(int a = 1; a < b; a++)
            {
                if(a*a + b*b == c*c)
                    //cout << "a = " << a << " b = " << b << " c = " << c << endl;
                    if(a+b+c == 1000)
                        cout << a*b*c << endl;
            }

    return 0;
}
