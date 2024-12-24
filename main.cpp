#include "iostream"
#include "func_a.h"
#include "func_b.h"
#include "comm.h"


int main()
{
    TamGiac tam_giac;

    MENU();

    KhoiTaoTamGiac(&tam_giac);
    tam_giac.ChieuCao = 8;
    tam_giac.Day = 10;
    TinhTamGiac(&tam_giac,TINH_DIENTICH);
    HienThiTamGiac(tam_giac);

    TinhTongChuoi(1000);
    TinhTichChuoi(500);
    return 0;
}
