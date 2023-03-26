#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int x,y;
	cin >> x >> y;
	if(x>y){
		cout << ">";
	}else if(x==y){
		cout << "=";
	}else{
		cout << "<";
	}
	return 0;
}
