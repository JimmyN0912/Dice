#include <iostream>
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int times,num;
    cin >> times;//數入重複數字
    for(int i=1;i<=times;i++){//重複times次
        cin >> num;//輸入要判斷的數字
        for(int j=1;j<=num;j++){//從1開始遞增判斷是不是因數，直到等於輸入值
            if(num%j==0){//是因數就輸出
                cout << j << endl;
            }
        }
    }
    return 0;
}
