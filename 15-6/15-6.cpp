#include <iostream>
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int a,b,t;//t用來在ab交換時暫存
    cin >> a >> b;
    if(a>b) {//讓b一定大於a
        t=b;
        b=a;
        a=t;
    }
    cout << a << "與" << b << "的公因數";
    for(int i=1;i<=a;i++){//從1開始累加，只要是ab公因數就輸出
        if(a%i==0 && b%i==0){
            cout << i << " ";
        }
    }
    cout << endl;
    for(int i=a;i>1;i--){//從a開始遞減，只要遇到第一個符合的就輸出並結束判斷
        if(a%i==0 && b%i==0){
            cout << a << "與" << b << "的最大公因數" << i << endl;
            break;//結束for迴圈
        }
    }
    return 0;
}
