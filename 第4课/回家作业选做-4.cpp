#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int a,b,c;
	bool d;
	cin >> a >> b >> c;
	if(a+b >c){
		if(b+c>a){
			if(a+c>b){
				d = true;
			}else{
				d = false;
			} 
		}else{
			d = false;
		}
	}else{
		d = false;
	}
	if(d == true){
		if(a == b){
			if (a == c){
				cout << "aaa";
			}else{
				cout << "aab";
			}
		}else if(a == c){
			if (b == c){
				cout << "aaa";
			}else{
				cout << "aab";
			}
		}else if(b == c){
			if (a == c){
				cout << "aaa";
			}else{
				cout << "aab";
			}
		}else{
			cout << "abc";
		}
	}else{
		cout << "error";
	}
	
	return 0;
}
