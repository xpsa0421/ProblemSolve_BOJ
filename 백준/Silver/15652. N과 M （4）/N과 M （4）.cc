#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n = 0, m = 0;
//bool is_used[10];
int nums[10];

void BackTracking(int k)
{
	// base condition
	if (k == m)
	{
		for (int i = 0; i < m; i++)
		{
			cout << nums[i] << " ";
		}
		cout << "\n";
		return;
	}

	// solve
	int max_num = (k == 0 ? 1 : nums[k - 1]);
	for (int i = max_num; i <= n; i++)
	{
		// fill array
		nums[k] = i;
		//is_used[i] = true;
		BackTracking(k + 1);
		//is_used[i] = false;
	}
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	// initialisation
	cin >> n >> m;
	
	// solve
	BackTracking(0);
}
