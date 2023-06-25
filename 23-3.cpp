#include <iostream>
using namespace std;
int main(){
    int b[4][5],a,total,i,j; //x[銷售員數量][產品數量]
    for(i=1;i<=4;i++){   //第幾名銷售員
        for(j=1;j<=5;j++){  //第幾項商品
           std::cin >> a;
           b[i][j] = a;
           total +=a;
        }
    }
    for(i=1;i<=4;i++){  //第幾名銷售員
        for(j=1;j<=5;j++){  //第幾項商品
            std::cout << i+1 <<"號銷售員" << j +1<<"號產品" << b[i][j] << "元";
        }
    }
    std::cout << "周總銷售額" << total << "元";
    return 0;
}
