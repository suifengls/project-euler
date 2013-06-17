#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <sstream>
using namespace std;

const int len = 15;

int main()
{
	int t[len][len];
	int score[len][len];
	for(int i = 0; i < len; i++)
		for(int j = 0; j < len; j++)
		{
			t[i][j] = 0;
			score[i][j] = 0;
		}

	ifstream fp("input");
	string line;
	int num = 0;
	
	while(getline(fp, line))
	{
		//cout << line << endl;
		stringstream s;
		s << line;
		string nn;
		int k = 0;
		int i = num;
		int j = 0;
		while(k <= num)
		{
			s >> nn;
			//cout << atoi(nn.c_str()) << '\t';
			t[i][j] = atoi(nn.c_str()); 

			i--;
			j++;
			k++;
		}
	//		cout << endl;
		num++;
	}

	int i = 0;
	int j = 0;
	int k = 1;
	num = 2;
	int max = t[0][0];  // num = 1
	score[0][0] = t[0][0];
	while(k < 15)
	{
		i = k;
		j = 0;
		while(j < num)
		{
			if(i == 0 && j > 0) // border
			{
				score[i][j] = score[i][j-1];
				score[i][j] += t[i][j];
			}
			else if(j == 0 && i > 0) // border
			{
				score[i][j] = score[i-1][j];
				score[i][j] += t[i][j];
			}
			else // inside triangle
			{
				score[i][j] = score[i-1][j] > score[i][j-1] ? score[i-1][j] : score[i][j-1];
				score[i][j] += t[i][j];
			}
			//cout << score[i][j] << endl;
			if(score[i][j] > max)
				max = score[i][j];
			i--;
			j++;
		}

		num++;
		k++;
	}
	
	cout << "max sum = " << max << endl;
    return 0;
}
