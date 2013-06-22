/**********************************************************************
* Author        :   suifengls
* E-mail        :   suifengls@gmail.com 
* Last modified :	2013-06-21 20:38
* Description   :   Probelm 41 - Pandigital primes 
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
	long n = 1;	
	int m[9];

	for(int a0 = 9; a0 > 0; a0--)
	{
		m[0] = a0;
		for(int a1 = 9; a1 > 0; a1--)
		{
			if(a1 == a0)
				continue;
			m[1] = a1;
			for(int a2 = 9; a2 > 0; a2--)
			{
				if(a2 == a0 || a2 == a1)
					continue;
				m[2] = a2;
				for(int a3 = 9; a3 > 0; a3--)
				{
					if(a3 == a0 || a3 == a1 || a3 == a2)
						continue;
					m[3] = a3;
					for(int a4 = 9; a4 > 0; a4--)
					{
						if(a4 == a0 || a4 == a1 || a4 == a2 || a4 == a3)
							continue;
						m[4] = a4;
						for(int a5 = 9; a5 > 0; a5--)
						{
							if(a5 == a0 || a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4)
								continue;
							m[5] = a5;
							for(int a6 = 9; a6 > 0; a6--)
							{
								if(a6 == a0 || a6 == a1 || a6 == a2 || a6 == a3 || a6 == a4 || a6 == a5)
									continue;
								m[6] = a6;
								for(int a7 = 9; a7 > 0; a7--)
								{
									if(a7 == a0 || a7 == a1 || a7 == a2 || a7 == a3 || a7 == a4 || a7 == a5 || a7 == a6)
										continue;
									m[7] = a7;
									for(int a8 = 9; a8 > 0; a8--)
									{
										if(a8 == a0 || a8 == a1 || a8 == a2 || a8 == a3 || a8 == a4 || a8 == a5 || a8 == a6 || a8 == a7)
											continue;
										m[8] = a8;
											bool prime = true;
											n = m[0];
											for(int i = 1; i < 9; i++)
											{
												n = n*10 + m[i];
											}
											
											for(int i = 2; i < n/2+1; i++)
											{
												if(n%i==0)
												{
													prime = false;
													break;
												}
											}
											if(prime)
											{
												cout << n << endl;
												return 0;
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

	for(int a0 = 8; a0 > 0; a0--)
	{
		m[0] = a0;
		for(int a1 = 8; a1 > 0; a1--)
		{
			if(a1 == a0)
				continue;
			m[1] = a1;
			for(int a2 = 8; a2 > 0; a2--)
			{
				if(a2 == a0 || a2 == a1)
					continue;
				m[2] = a2;
				for(int a3 = 8; a3 > 0; a3--)
				{
					if(a3 == a0 || a3 == a1 || a3 == a2)
						continue;
					m[3] = a3;
					for(int a4 = 8; a4 > 0; a4--)
					{
						if(a4 == a0 || a4 == a1 || a4 == a2 || a4 == a3)
							continue;
						m[4] = a4;
						for(int a5 = 8; a5 > 0; a5--)
						{
							if(a5 == a0 || a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4)
								continue;
							m[5] = a5;
							for(int a6 = 8; a6 > 0; a6--)
							{
								if(a6 == a0 || a6 == a1 || a6 == a2 || a6 == a3 || a6 == a4 || a6 == a5)
									continue;
								m[6] = a6;
								for(int a7 = 8; a7 > 0; a7--)
								{
									if(a7 == a0 || a7 == a1 || a7 == a2 || a7 == a3 || a7 == a4 || a7 == a5 || a7 == a6)
										continue;
									m[7] = a7;
											bool prime = true;
											n = m[0];
											for(int i = 1; i < 8; i++)
											{
												n = n*10 + m[i];
											}
											
											for(int i = 2; i < n/2+1; i++)
											{
												if(n%i==0)
												{
													prime = false;
													break;
												}
											}
											if(prime)
											{
												cout << n << endl;
												return 0;
											}
								}
							}
						}
					}
				}
			}
		}
	}

	for(int a0 = 7; a0 > 0; a0--)
	{
		m[0] = a0;
		for(int a1 = 7; a1 > 0; a1--)
		{
			if(a1 == a0)
				continue;
			m[1] = a1;
			for(int a2 = 7; a2 > 0; a2--)
			{
				if(a2 == a0 || a2 == a1)
					continue;
				m[2] = a2;
				for(int a3 = 7; a3 > 0; a3--)
				{
					if(a3 == a0 || a3 == a1 || a3 == a2)
						continue;
					m[3] = a3;
					for(int a4 = 7; a4 > 0; a4--)
					{
						if(a4 == a0 || a4 == a1 || a4 == a2 || a4 == a3)
							continue;
						m[4] = a4;
						for(int a5 = 7; a5 > 0; a5--)
						{
							if(a5 == a0 || a5 == a1 || a5 == a2 || a5 == a3 || a5 == a4)
								continue;
							m[5] = a5;
							for(int a6 = 7; a6 > 0; a6--)
							{
								if(a6 == a0 || a6 == a1 || a6 == a2 || a6 == a3 || a6 == a4 || a6 == a5)
									continue;
								m[6] = a6;
											bool prime = true;
											n = m[0];
											for(int i = 1; i < 7; i++)
											{
												n = n*10 + m[i];
											}
											
											for(int i = 2; i < n/2+1; i++)
											{
												if(n%i==0)
												{
													prime = false;
													break;
												}
											}
											if(prime)
											{
												cout << n << endl;
												return 0;
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
