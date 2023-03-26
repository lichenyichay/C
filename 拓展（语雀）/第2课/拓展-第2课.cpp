#include<bits/stdc++.h>
#include<windows.h>

using namespace std;

// 延时的时间，单位是毫秒 
const int stoptimeshort = 10;
const int stoptimelong = 10;

// 输出的矩阵 
// 输出 I love U 
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
// 输出 母亲节快乐 
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
	
    // 黑框程序标题 
    system ("title 母亲节祝福");
    
    // 改变背景颜色和字体颜色
	system ("color 03");  // 黑底，湖蓝色字  
  
    // 从容的走过了最美丽的岁月 
    cout << "        ";
    cout << "从";
    Sleep ( stoptimeshort );
    cout << "容";
    Sleep ( stoptimeshort );
    cout << "的";
    Sleep ( stoptimeshort );
    cout << "走";
    Sleep ( stoptimeshort );
    cout << "过";
    Sleep ( stoptimeshort );
    cout << "了";
    Sleep ( stoptimeshort );
    cout << "最";
    Sleep ( stoptimeshort );
    cout << "美";
    Sleep ( stoptimeshort );
    cout << "丽";
    Sleep ( stoptimeshort );
    cout << "的";
    Sleep ( stoptimeshort );
    cout << "岁";
    Sleep ( stoptimeshort );
    cout << "月" << endl;
    
    // 无悔的度过了最浪漫的年华 
    cout << "        ";
    system ( "color 72" );
    Sleep ( stoptimelong );
    cout << "无";
    Sleep ( stoptimeshort );
    cout << "悔";
    Sleep ( stoptimeshort );
    cout << "的";
    Sleep ( stoptimeshort );
    cout << "度";
    Sleep ( stoptimeshort );
    cout << "过";
    Sleep ( stoptimeshort );
    cout << "了";
    Sleep ( stoptimeshort );
    cout << "最";
    Sleep ( stoptimeshort );
    cout << "浪";
    Sleep ( stoptimeshort );
    cout << "漫";
    Sleep ( stoptimeshort );
    cout << "的";
    Sleep ( stoptimeshort );
    cout << "年";
    Sleep ( stoptimeshort );
    cout << "华" << endl;
    
    // 安静的沉没了您的灿烂 
    cout << "        ";
    system ( "color 79" );
    Sleep ( stoptimelong );
    cout << "安";
    Sleep ( stoptimeshort );
    cout << "静";
    Sleep ( stoptimeshort );
    cout << "的";
    Sleep ( stoptimeshort );
    cout << "沉";
    Sleep ( stoptimeshort );
    cout << "没";
    Sleep ( stoptimeshort );
    cout << "了";
    Sleep ( stoptimeshort );
    cout << "您";
    Sleep ( stoptimeshort );
    cout << "的";
    Sleep ( stoptimeshort );
    cout << "灿";
    Sleep ( stoptimeshort );
    cout << "烂" << endl;
    
    // 把最好的留给了我们 
    cout << "        ";
    system ( "color 7B" );
    Sleep ( stoptimeshort );
    cout << "把";
    Sleep ( stoptimeshort );
    cout << "最";
    Sleep ( stoptimeshort );
    cout << "好";
    Sleep ( stoptimeshort );
    cout << "的";
    Sleep ( stoptimeshort );
    cout << "留";
    Sleep ( stoptimeshort );
    cout << "给";
    Sleep ( stoptimeshort );
    cout << "了";
    Sleep ( stoptimeshort );
    cout << "我";
    Sleep ( stoptimeshort );
    cout << "们" << endl;
    
    Sleep ( stoptimelong );
    
    // 母亲节到了，祝全天下所有的母亲： 
    cout << "        ";
    system ( "color 7E" );
    Sleep ( stoptimeshort );
    cout << "母";
    Sleep ( stoptimeshort );
    cout << "亲";
    Sleep ( stoptimeshort );
    cout << "节";
    Sleep ( stoptimeshort );
    cout << "到";
    Sleep ( stoptimeshort );
    cout << "了，";
    Sleep ( stoptimeshort );
    cout << "祝";
    Sleep ( stoptimelong );
    cout << "美";
    Sleep ( stoptimelong );
    cout << "美";
    Sleep ( stoptimelong );
    cout << "的";
    Sleep ( stoptimelong );
    cout << "母";
    Sleep ( stoptimelong );
    cout << "亲";
    Sleep ( stoptimelong );
    cout << "大";
    Sleep ( stoptimelong );
    cout << "人：" << endl; 
    
	// 母亲节快乐，幸福安康！ 
    cout << "        ";
    system ( "color 79" );
    Sleep ( stoptimelong );
    cout << "母";
    Sleep ( stoptimelong );
    cout << "亲";
    Sleep ( stoptimelong );
    cout << "节";
    Sleep ( stoptimelong );
    cout << "快";
    Sleep ( stoptimeshort );
    cout << "乐，";
    Sleep ( stoptimelong );
    cout << "幸";
    Sleep ( stoptimelong );
    cout << "福";
    Sleep ( stoptimelong );
    cout << "安";
    Sleep ( stoptimelong );
    cout << "康！" << endl << endl;
    
    // 输出 母亲节快乐 
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
    // 妈妈您辛苦了，我爱您 
    cout << "        ";
    Sleep ( stoptimelong );
    cout << "妈";
    Sleep ( stoptimeshort );
    cout << "妈";
    Sleep ( stoptimeshort );
    cout << "您";
    Sleep ( stoptimeshort );
    cout << "辛";
    Sleep ( stoptimeshort );
    cout << "苦";
    Sleep ( stoptimeshort );
    cout << "了，";
    Sleep ( stoptimeshort );
    cout << "我";
    Sleep ( stoptimeshort );
    cout << "爱";
    Sleep ( stoptimeshort );
    cout << "您！" << endl << endl;
    
    // 输出 I LOVE U
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
    
    cout << "                                                        儿子：XXX 敬上" << endl;  
    
    return 0;
}
