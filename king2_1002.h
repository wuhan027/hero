#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int king2_1001()
{
    int T;
	cin >>T;
	int T0 = T;
	if (T > 74 || T <= 0)
	{
		return 0;
	}
	
	while(T-- > 0)
	{
		int N, M;
		cin >>N >>M;
		string Mi;
		

		int energy[477][477];
		for(int i = 0;i < N; i++)
		{
			cin >>Mi;
			for (int j = 0;j < M; j++)
			{
				char c = Mi.at(j);
				stringstream ss(c);
				ss>>energy[i][j];
			}
		}
		int sum = 0;
		for (int i = 0,j = 0;i < N || j < M; )
		{
			int ene1 = 0;
			int ene2 = 0;

		}
		cout <<"Case " <<T0 - T <<":" <<endl;
	}
}
