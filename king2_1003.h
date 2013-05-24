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
		if (N < 1 || N > 4747 || M < 0 || M > 2*N)
		{
			return 0;
		}
		int cell[4747][2];
		for(int i = 0;i < 4747; i++)
			for (int j = 0; j < 2; j++)
			{
				cell[i][j] = 0;
			}
		while(M-- > 0)
		{
			int xi,yi;
			cin >>xi >>yi;
			if (xi < 1 || xi > 2 || yi < 1 || yi > N)
			{
				return 0;
			}
			cell[yi][xi] = 1;
		}
	}
}
