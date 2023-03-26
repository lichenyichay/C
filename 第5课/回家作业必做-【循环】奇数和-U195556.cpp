#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a,sum;
	cin >> a;
	for(int i=1;i<=a;i+=1){
		if(i%2==1){
			sum += i;
		}
	}
	cout << sum;
	return 0;
}
