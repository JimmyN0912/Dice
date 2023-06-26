#include <iostream>
#include <Windows.h>  //寫到Dice的時候這行不用
using namespace std;
int main(){
    SetConsoleOutputCP(CP_UTF8); //寫到Dice的時候這行不用
    int i,j,k;
    for(i=0;i<21;i++){ //雞翁一隻5塊
        for(j=0;j<34;j++){ //雞母一隻3塊
            k = 100-i-j; //雞雛3隻1塊
            if(i*5+j*3+k/3.0==100){ //總價100塊
                cout << i <<" " << j << " " << k << endl;
            }
        }
    }
    return 0;
}
