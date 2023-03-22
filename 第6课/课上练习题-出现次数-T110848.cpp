#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int n,m,sum,o;
	cin >> n >> o;
	for(int i=1;i<=n;i++){
		cin >> m;
		if(m==o){
			sum += 1;
		}
	} 
	cout << sum;
	return 0;
}
