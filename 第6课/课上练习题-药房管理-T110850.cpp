#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	long long sum,a,b,sum2;
	cin >> sum >> a;
	for(int i=1;i<=a;i++){
		cin >> b;
		if(b < sum){
			sum -= b;
		}else{
			sum2 += 1;
		}
	}
	cout << sum2;
	return 0;
}
