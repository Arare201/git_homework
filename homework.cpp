#include <iostream>
#include "sample.h"
 
using namespace std;
 
int main()
{
    CSample obj;  // CSampleをインスタンス化
    int num1,num2;

    cout << "ひとつ目の整数を入力して下さい:" << endl;
    cin >> num1;
    cout << "ふたつ目の整数を入力して下さい:" << endl;
    cin >> num2; 

    obj.set( num1,num2 );  // CSampleのメンバ変数をセット
    cout <<num1<< '+' << num2 << '=' << obj.add() << endl;  // 足し算
    cout <<num1<< '-' << num2 << '=' << obj.minus() << endl;  // 引き算
    cout <<num1<< '*' << num2 << '=' << obj.mult() << endl;  // 掛け算
    if(num2==0){
        cout << "0で割ることはできません" << endl;
    }
    else{
        cout <<num1<< '/' << num2 << '=' << obj.div() << endl;  // 割り算
    }

    return 0;
}