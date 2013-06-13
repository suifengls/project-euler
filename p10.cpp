#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long sum = 2;
    int n = 3;
    while(n < 2000000)
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
            sum += n;
        }
        n += 2;
    }
    cout << sum << endl;
}
