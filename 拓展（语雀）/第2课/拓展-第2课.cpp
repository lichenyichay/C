#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

// ��ʱ��ʱ�䣬��λ�Ǻ��� 
const int stoptimeshort = 10;
const int stoptimelong = 10;

// ����ľ��� 
// ��� I love U 
int love[9][37] = 
{
0,1,1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,
0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,
0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,
1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0
};
// ��� ĸ�׽ڿ��� 
int happy[12][65] = 
{
0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,
0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,
0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,1,0,0,0,1,0,0,0,0,
0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,
1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,
0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,0,0,0,0,
0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,
0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,
0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,1,
0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,0,0,
0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0
};


int main() {
	
    // �ڿ������� 
    system ("title ĸ�׽�ף��");
    
    // �ı䱳����ɫ��������ɫ
	system ("color 03");  // �ڵף�����ɫ��  
  
    // ���ݵ��߹��������������� 
    cout << "        ";
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��" << endl;
    
    // �޻ڵĶȹ������������껪 
    cout << "        ";
    system ( "color 72" );
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��" << endl;
    
    // �����ĳ�û�����Ĳ��� 
    cout << "        ";
    system ( "color 79" );
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "û";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��" << endl;
    
    // ����õ����������� 
    cout << "        ";
    system ( "color 7B" );
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��" << endl;
    
    Sleep ( stoptimelong );
    
    // ĸ�׽ڵ��ˣ�ףȫ�������е�ĸ�ף� 
    cout << "        ";
    system ( "color 7E" );
    Sleep ( stoptimeshort );
    cout << "ĸ";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "�ˣ�";
    Sleep ( stoptimeshort );
    cout << "ף";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "ĸ";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "�ˣ�" << endl; 
    
	// ĸ�׽ڿ��֣��Ҹ������� 
    cout << "        ";
    system ( "color 79" );
    Sleep ( stoptimelong );
    cout << "ĸ";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "�֣�";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimelong );
    cout << "����" << endl << endl;
    
    // ��� ĸ�׽ڿ��� 
    Sleep ( stoptimelong );
    system ( "color FC" );
    for ( int i = 0; i < 12; i++ ) {
        cout<<"        ";
        for ( int j = 0; j < 65; j++ ) {
            if ( happy[i][j] == 0 )
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
        Sleep ( 100 );
    }
    
    cout << endl << endl;
    Sleep ( stoptimelong );
    system ( "color 79" );
    // �����������ˣ��Ұ��� 
    cout << "        ";
    Sleep ( stoptimelong );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "�ˣ�";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "��";
    Sleep ( stoptimeshort );
    cout << "����" << endl << endl;
    
    // ��� I LOVE U
    Sleep ( stoptimelong );
    system ( "color 97" );
    for ( int i = 0; i < 9; i++ ) {
        cout<<"        ";
        for ( int j = 0; j < 37; j++ ) {
            if ( love[i][j] == 0 )
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
        Sleep ( 100 );
    }
    
    cout << "                                                        ���ӣ�XXX ����" << endl;  
    
    return 0;
}
