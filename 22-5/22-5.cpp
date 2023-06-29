#include <iostream>
#include <iomanip>//要設定輸出小數位數，要記得加
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int x[50],num,total=0,avg;
    cin >> num;//輸入班級人數
    for(int i=0;i<num;i++){//輸入每個成績，重複num次，直到<num是因為迴圈從0開始算
        cin >> x[i];
        total+=x[i];
    }
    for(int i=0;i<num;i++){//從1號開始輸出，要+1是因為迴圈從0開始算
        cout << i+1 << "號:" << x[i] << endl;
    }
    cout <<fixed<<setprecision(2)<< (float)total/num << endl;//計算平均，要設定輸出位數，且被除數或除數其中一個是浮點數的話，輸出才會有小數
    return 0;
}
