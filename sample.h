#ifndef _SAMPLE_H_
#define _SAMPLE_H_
 
// クラス宣言
class CSample
{
public:
    void set(int num1,int num2);  // m_numに値を設定する
    int add();
    int minus();
    int mult();
    double div();
private:
    int m_num1;
    int m_num2;
};
 
#endif //_SAMPLE_H_