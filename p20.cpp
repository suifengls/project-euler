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
	
	double n = 100;
	for(int i = n-1; i >= 1; i--)
		n = n*i;
	//cout << n << endl;
	long sum = 0;
	
	string nn("93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000");
	
	int i = 0;
	while(i < nn.size())
	{
		sum += nn[i] - 48;
	    //cout << nn[i] << endl;
		i++;
	}
	cout << "sum = " << sum << endl;


    return 0;
}
