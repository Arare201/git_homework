#include "sample.h"
 
void CSample::set(int num1,int num2)
{
    m_num1 = num1;
    m_num2 = num2;
}
 
int CSample::add()
{
    return m_num1+m_num2;
}

int CSample::minus()
{
    return m_num1-m_num2;
}

int CSample::mult()
{
    return m_num1*m_num2;
}

double CSample::div()
{
    return (double)m_num1/(double)m_num2;
}