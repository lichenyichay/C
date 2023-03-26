#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a,sum=1;
	cin >> a;
	for(int i=1;i<=a;i++){
		sum *= i;
	}
	cout << sum;
	return 0;
}
