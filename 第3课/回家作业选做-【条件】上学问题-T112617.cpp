#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a,b;
	cin >> a >> b;
	b = b+30+15;
	if(b>=60){
		b = b-60;
		a = a+1;
	}
	if(a == 8){
		if(b == 0){
			cout << "on time";
		}else{
			cout << "late";
		}
	}else if(a<8){
		cout << "on time";
	}else{
		cout << "late";
	}
	return 0;
}
