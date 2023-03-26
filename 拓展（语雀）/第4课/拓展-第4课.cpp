#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int sum,a,b;
	char c;
	cin >> c >> a;
	cin >> b;
	if(c=="*"){
		sum = 1;
	}else{
		sum = b;
	}
	for(int i=1;i<a;i++){
		cin >> b;
		if(c=="+"){
			sum += b;
		}else if(c=="-"){
			sum -= b;
		}else if(c=="*"){
			sum *= b;
		}else if(c=="/"){
			if(!(b = 0)){
				sum /=0;
			}else{
				cout << "除数不能为零，输入无效！";
			}
		}else if(c == "%"){
			if(!(b = 0)){
				sum /=0;
			}else{
				cout << "被取余数不能为零，输入无效！";
			}
		}else{
			cout << "符号无效！"
		}
	}
	cout << sum;
	return 0;
}
