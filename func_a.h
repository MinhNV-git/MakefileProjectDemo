#ifndef _FUNC_A_H_
#define _FUNC_A_H_

#include "stdio.h"
#include "stdint.h"

#define TINH_CHIEUCAO       0
#define TINH_DAY            1
#define TINH_DIENTICH       2

typedef struct TamGiac
{
    float Day;
    float ChieuCao;
    float DienTich;
}TamGiac;

void KhoiTaoTamGiac(TamGiac *_tg);
void TinhTamGiac(TamGiac *_tg, int _mode);
void HienThiTamGiac(TamGiac _tg);


#endif
