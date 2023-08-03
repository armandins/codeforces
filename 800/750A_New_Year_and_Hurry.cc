#include <iostream>
using namespace std;

// function to calculate how long it takes to solve all the problems
int solveTime(int N);

int main(){
	// total time he has
	const int tot = 240;
	// number of problems
	int N; 
	// number of mins of drive to party
	int mins = 0;
	// input from user
	cin >> N >> mins;

 	while ((solveTime(N) + mins) > tot){
		// reduce number of quest while total time exceeds limit
		N--;
	}
	// output N
	cout << N << "\n";
}

int solveTime(int N){
	// int to store total time needed to solve each prob.
	int to_solve = 0;
	for (int i = 1; i <= N; i++){
		to_solve += 5*i;
	}
	
	return to_solve;
}