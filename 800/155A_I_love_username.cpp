#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N, count;
	cin >> N;
	vector<int> scores(N);
	int max, min = scores[0];
	// take vals
	for (int &s : scores)
		cin >> s;
	
	for (int x = 0; x != N; x++)
	{
		if (scores[x] > max ){
			max = scores[x];
			count++;
		}

		if (scores[x] < min){
			min = scores[x];
			count++;
		}
	}

	cout << (N == '1' ? '0' : count) << "\n";
}

