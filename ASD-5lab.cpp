#include <iostream>
#include <queue>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	queue<int> Queue; 
	const int n = 6;
	int mas[n][n] = {
		{0, 1, 1, 0, 0, 1},
		{1, 0, 0, 0, 0, 0},
		{1, 0, 0, 1, 0, 0},
		{0, 0, 1, 0, 1, 0},
		{0, 0, 0, 1, 0, 0},
		{1, 0, 0, 0, 0, 0} };

	int tops[n]; 
	for (int i = 0; i < n; i++)
		tops[i] = 0; 
	Queue.push(0); 
	cout << "Îáõ³ä ãðàôà: " << endl;
	while (!Queue.empty()) 
	{
		int top = Queue.front(); 
		Queue.pop();
		tops[top] = 2; 
		for (int j = 0; j < n; j++)
		{ 
			if (mas[top][j] == 1 && tops[j] == 0)

			{
				Queue.push(j); 
				tops[j] = 1; 
			}
		}
		cout << top + 1 << endl; 
	}
	system("pause");
	return 0;
}
