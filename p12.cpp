#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    long tr = 0;
    int n = 0;
    long m = 1;
    long k = 1;

    while(n <= 500)
    {
        tr += k;
        cout << " The " << tr << endl;

        n = 1; // 1
        for(int i = 2; i <= tr; i++)
        {
            if(tr % i == 0)
                n++;
        }
    
        //cout << " has " << n << " factors." << endl;

        k++;
        m++;
    }

    cout << tr << endl;

    return 0;
}
