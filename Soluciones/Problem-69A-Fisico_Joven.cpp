#include <bits/stdc++.h>
using namespace std;
int main (){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int x[n], y[n], z[n];
	int sumX = 0, sumY = 0, sumZ = 0;
	if (n>=1 && n<=100){
		for (int i=0; i<n; i++){
			cin>>x[i]>>y[i]>>z[i];
		}
		for (int i=0; i<n; i++){
			if (x[i]>=-100 && x[i]<=100){
				sumX = sumX + x[i];
			} else {
				sumX = sumX + 1;
			}
			if (y[i]>=-100 && y[i]<=100){
				sumY = sumY + y[i];
			} else{
				sumY = sumY + 1;
			}
			if (z[i]>=-100 && z[i]<=100){
				sumZ = sumZ + z[i];
			} else{
				sumZ = sumZ + 1;
			}
		}
		if (sumX == 0 && sumY == 0 && sumZ == 0){
			cout<<"YES";
		} else{
			cout<<"NO";
		}	
	}
	return 0;
}
