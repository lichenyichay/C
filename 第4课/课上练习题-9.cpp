#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	long long a,b,c,e;
	double d;
	cin >> a >> b >> c;
	d = (double)c/b;
	if(d == c/b){
		e = a-(c/b);
	}else{
		e = a-(c/b+1);
	}
	if(e<=0){
		cout << 0;
	}else{
		cout << e;
	}
	return 0;
}
