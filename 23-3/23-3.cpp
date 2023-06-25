#include <iostream>
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int a[4][5], b, t=0;  //a[銷售員數][商品數],b->輸入,t->總和
    for(int i=0;i<4;i++){ 
        for(int j=0;j<5;j++){
            cin >> b;
            a[i][j]=b;
            t+=b;
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout << i+1 <<"號銷售員"<< j+1 <<"號產品"<< a[i][j] <<"元"<< endl;
        }
    }
    cout <<"周總銷售額"<< t <<"元"<< endl;
    return 0;
}
