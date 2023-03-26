#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	double a;
	cin >> a;
	if(a>=0){
		printf("%.2f",a);
	}else{
		a = -a;
		printf("%.2f",a);
	}
	return 0;
}
