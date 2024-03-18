#include <iostream>
using namespace std;
int main() {
	for (int k = 0; k < 3; k++) {
		int N=0;
		long long sum = 0, flow=0;
		cin >> N;
		for (int i = 0; i < N; i++) {
			long long temp;
			cin >> temp;
			long long prev = sum;
			sum = sum + temp;
			if (temp > 0 && prev > 0 && sum < 0) flow++;
			if (temp < 0 && prev < 0 && sum > 0) flow--;
		}
		if (flow == 0) {
			if (sum == 0) cout << '0' << endl;
			else cout << (sum > 0 ? '+' : '-') << endl;
		}
		else {
			cout << (flow > 0 ? '+' : '-') << endl;
		}
	}
}