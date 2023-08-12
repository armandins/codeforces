#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

void solve(){
	int A, B; 
	cin >> A >> B;
	if (B > A)
		swap(A, B);

	if ( A == B ) cout << 0 << '\n';
	else
	{
		if ((A - B) % 10 == 0 ) cout << (A - B) / 10 << '\n';
		
		else cout << ((A - B) / 10) + 1 << '\n';
	}

}

int main(){
	int testCase;
	cin >> testCase;

	while(testCase-- > 0){
		solve();
	}

}