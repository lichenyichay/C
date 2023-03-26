#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a,b,i;
	double c,d,e,f,g,h;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	i = a/c+1;
	if(i*d < b){
		cout << "YES";
	}else{
		i = a/e+1;
		if(i*f < b){
			cout << "YES";
		}else{
			i = a/g+1;
			if(i*h < b){
				cout << "YES";
			}else{
				cout << "NO";
			}
		}
	}
	return 0;
}
