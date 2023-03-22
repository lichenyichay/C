#include <bits/stdc++.h>// 万能头文件 
using namespace std;
int main() {
	int	a,b,c,d,e,f,g,h,i,j,k;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	i=a+b+c+d+e+f+g+h;
	j = 8-i;
//	cout << i << " " << j;
	if(i == 8 or j == 8){
		cout << 2<<endl;
	}else if(i==4 or j==4){
		cout <<0<<endl;
	}else if(i==6 or j==6){
		cout << 1<<endl;
	}
	return 0;
}
