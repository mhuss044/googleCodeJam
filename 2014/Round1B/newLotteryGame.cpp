// Only completes the small input
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool decending(int x, int y)
{
	return x>y;
}

void permute(vector<int>::iterator it, vector<int>::iterator it2)
{
	
}

long long int minScalarProd(vector<int>::iterator it, vector<int>::iterator it2, int size)
{
	int ans = 0;
	for(int x = 0; x < size; x++)
		ans += (*(it+x))*(*(it2+x));
//		ans += it[x]*it2[x];
//		ans += *(it++)*(*(it2++)); 
	return ans; 
}

int main(void)
{
	int numTest = 0, testCase = 1, ans = 0, size = 0;
	vector<int> v1, v2;

	cin >> numTest;
	
	while(numTest > 0)
	{
		cin >> size;
		for(int x = 0; x < size; x++)
		{
			cin >> ans; 
			v1.push_back(ans);
		}

		for(int x = 0; x < size; x++)
		{
			cin >> ans; 
			v2.push_back(ans);
		}

		if(testCase != 1)
			cout << endl;
	//	permute(v1.begin(), v2.begin());	// Order elements to result in minimum prod
		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end(), decending);

		cout << "Case #" << testCase << ": " << minScalarProd(v1.begin(), v2.begin(), size);
		numTest--;	
		testCase++;

		v1.clear();	// empty
		v2.clear();
	}

	return 0;
}
