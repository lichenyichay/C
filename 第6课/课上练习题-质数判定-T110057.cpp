#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a;
	bool flag=false;
	cin >> a;
	for(int i=2;i<a;i++){
		if(a%i == 0){
			flag=true;
		}
	}
	if(a == 0 or a == 1){
		flag=true;
	}
	if(flag){
		cout << "No"; 
	}else{
		cout << "Yes";
	}
	return 0;
}
