#include <iostream>
#include <vector>
using namespace std;

int main() {
	int q;
	cin >> q;

	for(int i = 0; i < q; i++){
		int k;
		string s;
		cin >> s >> k;
		int n = s.length();

		vector<int> mass (n);

		for (int i=1; i<n; ++i) {
			int numm = mass[i-1];
			while (s[i] != s[numm] && numm > 0 ){
				numm = mass[numm-1];
			}
			if (s[i] == s[numm]){
				numm = numm +1;
			}
			mass[i] = numm;
		}
	    int	z  = s.size();
	    int g = (z - mass[z - 1]);
		cout << z + g * (k - 1) << endl;
	}
    
	return 0;
}