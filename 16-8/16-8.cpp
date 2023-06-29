#include <iostream>
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int num;
    cin >> num;//輸入數字開始判斷
    while(num>0){//只要輸入的數大於0就判斷，小於就結束
        for(int i=1;i<=num;i++){//從1開始累加，只要是因數就輸出
            if(num%i==0){
                cout << i << " ";
            }
        }
        cout << endl;//所有音書輸出完成，換行
        cin >> num;//再輸入，繼續判斷
    }
    return 0;
}
