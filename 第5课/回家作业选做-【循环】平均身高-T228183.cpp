#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int b;
	double a,sum=0.0,c;
	cin >> b;
	for(int i=1;i<=b;i++){
		cin >> a;
		sum += a;
	}
	c = sum/b;
	printf("%.2f",c);
	return 0;
}
