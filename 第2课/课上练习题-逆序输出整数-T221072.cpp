#include <bits/stdc++.h>// ����ͷ�ļ� 
using namespace std;
int main() {
	int a,b,c,d;
	cin >> a;
	b = a % 10;
	c = (a/10)%10;
	d = ((a/10)/10) % 10;
	printf("%d %d %d",b,c,d);
	return 0;
} 
