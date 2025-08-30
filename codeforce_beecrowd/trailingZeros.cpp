#include<bits/stdc++.h>
using namespace std;

int main(){

	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, zero;
	cin >> n;

	while(n > 0){
		n /= 5;
		zero += n;
	}
	
	cout << zero << "\n";

	return 0;
}
