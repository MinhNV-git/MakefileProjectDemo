#include "func_b.h"
#include "iostream"

uint32_t TinhTongChuoi(uint16_t _n)
{
    uint16_t i;
    uint32_t sum;
    for(i=0;i<_n;i++)
    {
        sum += i;
    }
    std::cout<<"Tong la: "<<sum<<std::endl;
    return sum;
}

uint32_t TinhTichChuoi(uint16_t _n)
{
    uint16_t i;
    uint32_t sum=1;
    for(i=1;i<_n;i++)
    {
        sum = sum * i;
    }
    std::cout<<"Tich la: "<<sum<<std::endl;
    return sum;
}