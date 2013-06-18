/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-17 17:50
* Description   :   problem 24 - Lexicographic permutations   
**********************************************************************/
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <map>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
	string ord = "0123456789";
	int n = 0;	

	for(int a0 = 0; a0 < 10; a0++)
	{
		ord[0] = '0' + a0;
		for(int a1 = 0; a1 < 10; a1++)
		{
			if(a1 == a0)
				continue;
			ord[1] = '0' + a1;
			for(int a2 = 0; a2 < 10; a2++)
			{
				if(a2 == a0 || a2 == a1)
					continue;
				ord[2] = '0' + a2;
				for(int a3 = 0; a3 < 10; a3++)
				{
					if(a3 == a0 || a3 == a1 || a3 == a2)
						continue;
					ord[3] = '0' + a3;
					for(int a4 = 0; a4 < 10; a4++)
					{
						if(a4 == a0 || a4 == a1 || a4 == a2 || a4 == a3)
							continue;
						ord[4] = '0' + a4;
						for(int a5 = 0; a5 < 10; a5++)
						{
							if(a5 == a0 || a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4)
								continue;
							ord[5] = '0' + a5;
							for(int a6 = 0; a6 < 10; a6++)
							{
								if(a6 == a0 || a6 == a1 || a6 == a2 || a6 == a3 || a6 == a4 || a6 == a5)
									continue;
								ord[6] = '0' + a6;
								for(int a7 = 0; a7 < 10; a7++)
								{
									if(a7 == a0 || a7 == a1 || a7 == a2 || a7 == a3 || a7 == a4 || a7 == a5 || a7 == a6)
										continue;
									ord[7] = '0' + a7;
									for(int a8 = 0; a8 < 10; a8++)
									{
										if(a8 == a0 || a8 == a1 || a8 == a2 || a8 == a3 || a8 == a4 || a8 == a5 || a8 == a6 || a8 == a7)
											continue;
										ord[8] = '0' + a8;
										for(int a9 = 0; a9 < 10; a9++)
										{
											if(a9 == a0 || a9 == a1 || a9 == a2 || a9 == a3 || a9 == a4 || a9 == a5 || a9 == a6 || a9 == a7 || a9 == a8)
												continue;
											ord[9] = '0' + a9;
											//cout << ord << endl;
											n++;
											if(n == 1000000)
												cout << ord << endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}


	return 0;
}
