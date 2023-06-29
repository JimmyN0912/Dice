#include <iostream>
#include <iomanip>//要設定輸出小數位數，要記得加
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int fun(int n){//計算階乘用的函數
    if(n==1){//1階乘就是1
        return 1;
    }
    else//不是1就從最小位開始往上乘
        return fun(n-1)*n;
        /*
            例:8!
                先計算fun(8-1)*8
                    要算fun(7)，就要先算fun(7-1)...
                以此類推，就會一路從1*2*3*...*8
                就可以得到階乘值
        */
}
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int n;
    cin >> n;//輸入判斷數字
    for(int i=1;i<=n;i++){//從1開始輸出階乘值
        cout << i << "!=" << fun(i) << endl;//在這裡，Fun()是我上面新創建的函數，這句程式就會呼叫它進行計算然後輸出結果
    }
    return 0;
}
