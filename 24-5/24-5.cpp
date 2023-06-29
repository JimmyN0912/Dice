#include <iostream>
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int n,m500,m100,m50,m10,m5,m1; //n為使用者輸入的數 / m500,100...為不同面額數量
    cin >> n;//輸入n
    while(n>0){//只要n>0就繼續執行
    m500 = n/500; //500紙幣數量
    n = n - 500*m500; //原本的數減掉已經換成500的，就是剩下要換的
    m100 = n/100;//以此類推
    n = n - 100*m100;
    m50 = n/50;
    n = n - 50*m50;
    m10 = n/10;
    n = n - 10*m10;
    m5 = n/5;
    m1 = n - 5*m5;
    cout << m500 << "張500元 "<< m100 << "張100元 "<< m50 << "張50元 "<< m10 << "張10元 "<< m5 << "張5元 "<< m1 << "張1元 " << endl;//輸出
    cin >> n;//再次輸入來判斷
    }
    return 0;
}
