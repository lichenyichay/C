#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	long long a;
	cin >>a;
	cout << (a%1000)*((a/1000)%1000)*(a/1000000);
	return 0;
}
