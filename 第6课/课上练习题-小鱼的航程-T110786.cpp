#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int x,n,sum;
	cin >> x >> n;
	for(int i=1;i<=n;i++){
		if(x>7){
			x=1;
		}
		if(not (x==6 or x==7)){
			sum += 250;
		}
		x+=1;
	}
	cout << sum;
	return 0;
}
