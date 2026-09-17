#include <iostream>
using namespace std;

int main()
{
	srand(time(0));

	const int rows1 = 3;
	const int cols1 = 4;
	int ARR1[rows1][cols1];
	int zeros = 0;

	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols1; j++)
		{
			ARR1[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < rows1; i++)
	{
		for (int j = 0; j < cols1; j++)
		{
			cout << ARR1[i][j] << " ";
			if (ARR1[i][j] == 0)
			{
				zeros++;
			}
		}
		cout << endl;
	}
	cout << "Zeros in big cycle : " << zeros << endl;
	
	//================================================================================
	const int rows = 11;
	const int cols = 11;
	int ARR[rows][cols];
	int max = 0;

	int choice;
	int N = 11;
	cout << "Choose variant(1-10) : ";
	cin >> choice;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			ARR[i][j] = rand() % 90 + 10;
		}
	}

	if (choice == 1)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i <= j)
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 2)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i >= j)
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 3)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i <= j and i + j <= N - 1)
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 4)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i >= j and i + j >= N - 1)
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 5)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if ((i <= j and i + j <= N - 1) or (i >= j and i + j >= N - 1))
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 6)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if ((i >= j and i + j <= N - 1) or (i <= j and i + j >= N - 1))
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 7)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i >= j and i + j <= N - 1)
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 8)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i <= j and i + j >= N - 1)
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 9)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j <= N - 1)
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else if (choice == 10)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				if (i + j >= N - 1)
				{
					cout << ARR[i][j] << " ";
				}
				else
				{
					cout << "   ";
				}
			}
			for (int j = 0; j < cols; j++)
			{
				if (ARR[i][j] > max)
				{
					max = ARR[i][j];
				}
			}
			cout << endl;
		}
		cout << "Max : " << max << endl;
	}
	else
	{
		cout << "Invalid choice" << endl;
	}
}

