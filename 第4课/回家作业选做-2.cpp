#include <bits/stdc++.h>//万能头文件 
using namespace std;
int main() {
	int x,y,a,b;
	double c,d;
	cin >> x >> y;
	c = (double)(y-2*x) / (4-2);
	d = x - c;
	if(c<0 or d<0){
		cout << "No";
	}else if(c == (int)c && d == (int)d){
		cout << "Yes";
	}else{
		cout << "No";
	}
	return 0;
}

