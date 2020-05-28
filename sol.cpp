#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int x[] = {2,4,8,16};
	int n = sizeof(x)/sizeof(x[0]);
	int ans = INT_MAX;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(abs(x[i]-x[j]) < ans){
				ans = abs(x[i]-x[j]);
			}
		}
	}
	cout << ans << "\n";
	return 0;
}