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
	int numTest = 0, testCase = 1;
//	int a = 0b00000010, b = 0b00000001, c = a&b;	// for some reason cant cout << a&b;?
	long long int m1A = 0, m2B = 0, K = 0, wingPairs = 0;

	cin >> numTest;

	while(numTest > 0)
	{
		cin >> m1A >> m2B >> K;	

		for(long long int z = 0b000000; z < K; z++)
			for(long long int x = z; x < m1A; x++)
				for(long long int y = z; y < m2B; y++)
				{
					if((x&y)==z)
					{
						wingPairs++;
		//				cout << endl << x << y << z;
					}
				}
				
				

		if(testCase != 1)
			cout << endl;
	//	permute(v1.begin(), v2.begin());	// Order elements to result in minimum prod
	//	sort(v1.begin(), v1.end());
	//	sort(v2.begin(), v2.end(), decending);

		cout << "Case #" << testCase << ": " << wingPairs;
		numTest--;	
		testCase++;

		wingPairs = 0;
	}

	return 0;
}
