#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;

int main() {
	
	cout << "-----Ħ˹���뷢����-----" << endl; 
	cout << "������ 1 ��ʾ������2 ��ʾ����" << endl; 
	char morse;  				// �ַ��ͱ��� 
	while(true) {				// whileѭ��
		morse = getch();  		// �ӿ���̨��ȡһ���ַ���������ʾ����Ļ��
		if(morse == '1') {
			cout << ".";
			Beep(800, 350);		// ϵͳ����
		}else if(morse == '2') {
			cout << "-";
			Beep(800, 600);
		}
	}
	
	return 0;
}
