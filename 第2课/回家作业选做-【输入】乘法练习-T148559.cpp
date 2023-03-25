#include <bits/stdc++.h>// 万能头文件
using namespace std;
int main() {
	long long a;
	cin >>a;
	cout << (a%1000)*((a/1000)%1000)*(a/1000000);
	return 0;
}
