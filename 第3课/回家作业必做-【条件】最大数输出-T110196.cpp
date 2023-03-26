#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if(a>b){
		if (a>c){
			cout << a;
		}else{
			cout << c;
		}
	}else if(a<b){
		if (b>c){
			cout << b;
		}else{
			cout << c;
		}
	}else{
		if (b>c){
			cout << b;
		}else{
			cout << c;
		}
	}
	return 0;
}
