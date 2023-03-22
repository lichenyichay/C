#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	const int sum = 20000;
	const double PI = 3.14159;
	long long r,h;
	double a,b;
	int c;
	cin >> h >> r;
	a = PI * r * r * h;
	b = sum / a;
	c = b+1;
	cout << c;
	return 0;
}
