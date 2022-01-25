#include <bits/stdc++.h>
using namespace std;
long long a[100110],l = 0, r = 1e14;

int main() {
	int n, k;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}


	long long caunt = 0, sum = 0;

	while(l < r){
		long long x = (r + l);
		long long midl = x/2;
		int caunt = 1;
		long long sum = 0;
		
		for(int i = 0; i < n; i++){

			if(midl < a[i]){
				caunt = k + 1;
			}
			if(midl < sum + a[i]){
				sum = 0;
				caunt++;
			}
			sum += a[i];

		}
		if(k < caunt){
			l = midl + 1;
		}
		else {
			r = midl;
		}
	}



	cout << l;

	return 0;
}