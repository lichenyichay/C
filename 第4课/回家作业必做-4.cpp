#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a,b,c,a1,b1,c1;
	cin >> a >> b >> c >> a1 >> b1 >> c1;
	if(a<a1){
		cout << "WIN";
	}else if(b<b1){
		cout << "WIN";
	}else if(c<c1){
		cout << "WIN";
	}else{
		cout << "LOSE";
	}
	return 0;
}
