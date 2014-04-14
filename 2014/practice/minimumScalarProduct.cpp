#include <iostream>
#include <vector>

using namespace std;

bool decending(int x, int y)
{
	return x>y;
}

void permute(vector<int>::iterator it, vector<int>::iterator it2)
{
	
}

int minScalarProd(vector<int>::iterator it, vector<int>::iterator it2, int size)
{
	int ans = 0;
	for(int x = 0; x < size; x++)
		ans += *(it++)*(*(it2++)); 
	return ans; 
}

int main(void)
{
	int numTest = 0, testCase = 1;
	vector<int> v1, v2;

	cin >> numTest;
	
	while(numTest > 0)
	{
		cin >> size;
		for(int x = 0; x < size; x++)
			cin >> v1.insert(v1.end()-1);

		if(testCase != 1)
			cout << endl;
		cout << endl;
		for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *(it) << " ";
		}


		cout << "Case #" << testCase << ": ";
		numTest--;	
		testCase++;
	}
	return 0;
}
