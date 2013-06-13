#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    string n;
    cin >> n;
    
    int p0 = n[0] - 48, p1 ;
    for(int j = 1; j < 5; j++)
    {
        p0 = p0*(n[j]-48);
    }
    
    for(int i = 1; i < n.size()-5; i++)
    {
        p1 = n[i]-48;
        
        for(int j = 1; j < 5; j++)
        {
            p1 = p1 * ( n[i+j]-48);
        }

        if(p1 > p0)
            p0 = p1;
    }

    cout << p0 << endl;

    return 0;
}
