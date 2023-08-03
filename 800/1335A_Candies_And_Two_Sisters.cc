/* Arman Dindar Safa */
#include <iostream>
using namespace std;

int main(){
	int N; 
    long long a, i, x;
    cin >> N;
    for(i = 1; i <= N; i++){
        cin >> a;
        if(a % 2 == 0){
            x = a / 2 ;
            x -= 1;
        }
		else{
        x = a / 2;
        }
        cout << x << "\n";
    }
}