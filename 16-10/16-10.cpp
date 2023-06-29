#include <iostream>
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    for(int i=1;i<=5;i++){//行數1-5
        for(int j=1;j<=i;j++){//第幾行就有幾個數字，都從一開始累加
            cout << j;
        }
        cout << endl;//一行輸出完成之後換行
    }
    return 0;
}
