#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int th = 1;

    int n = 3;
    while(th < 10001)
    {
        bool flag = true;

        for(int j = 2; j <= (int)sqrt(n)+1; j++)
        {
            if(n % j == 0)
            {
                //cout << n << " is not a prime" << endl;
                flag = false;
                break;
            }
        }
        if(flag)
        {
            //cout << n << " is a prime" << endl;
            th++;
        }
        n += 2;
    }
    cout << n-2 << endl;
}
