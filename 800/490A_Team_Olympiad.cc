/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N; 
	cin >> N;

	// a vector that includes all
	vector<int> A(N);
	// each vector for talent groups
	vector<int> cone;
	vector<int> ctwo;
	vector<int> cthree; 

	for (auto &a : A){
		cin >> a;
		if (a == 1) cone.push_back(a);
		if (a == 2) ctwo.push_back(a);
		if (a == 3) cthree.push_back(a);
	}
	// max number of groups that can be created.
	auto quant = min(int(cone.size()), min(int(ctwo.size()), int(cthree.size())));

	cout << quant << '\n';

	for (int x = 0; x < quant; x++)
		cout << cone[x] << " " << ctwo[x] << " " << cthree[x] << '\n'; 

}
*/

#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n;
    cin>>n;
    vector<int> math , prog, eu ;
    for(int i = 1 ; i <= n ; i++){
      int x ; cin >> x ;
      if(x == 1) prog.push_back(i);
      else if(x == 2) math.push_back(i);
      else if( x== 3)eu.push_back(i);
    }
    int ans = min(math.size(),  min(prog.size(),  eu.size()));
    cout<< ans << endl;
    for(int i = 0 ; i < ans ; i ++){
      
      cout<<math[i]<< " "<< prog[i] << " "<< eu[i]<< endl ;
    }
}