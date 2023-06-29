#include <iostream>
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int x[30],y[30],total=0;//建立陣列X，長度30 / 陣列y同樣長度30，用來存放處理後的新值 / total用來存放累加值
    for(int i=0;i<30;i++){//輸入X陣列內容(陣列計數從0-29)
        cin >> x[i];
    }
    for(int i=0;i<30;i++){//將陣列X內容取出處理後，存入陣列Y相同位置
        y[i] = i*2+x[i];
    }
    cout << "Array Value" << endl;
    for(int i=0;i<30;i++){//輸出結果
        cout <<"array["<<i<<"] "<< y[i] << endl;
    }
    for(int i=0;i<30;i++){//將每個數字取出後加入總和變數
        total+=y[i];
    }
    cout << "累加值=" << total << endl;
    return 0;
}
