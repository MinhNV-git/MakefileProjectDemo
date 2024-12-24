#include "func_a.h"
#include "iostream"

void KhoiTaoTamGiac(TamGiac *_tg)
{
    _tg->ChieuCao=0;
    _tg->Day=0;
    _tg->DienTich=0;
}

void TinhTamGiac(TamGiac *_tg, int _mode)
{
    switch (_mode)
    {
    case TINH_CHIEUCAO:
        _tg->ChieuCao = _tg->DienTich / _tg->Day;
        break;
    case TINH_DAY:
        _tg->Day = _tg->DienTich / _tg->ChieuCao;
        break;
    case TINH_DIENTICH:
        _tg->DienTich = _tg->ChieuCao * _tg->Day;
        break;
    default:
        break;
    }
}
void HienThiTamGiac(TamGiac _tg)
{
    std::cout<<"Dien Tich: "<<_tg.DienTich <<", Chieu Cao: " <<_tg.ChieuCao <<", Day: "<<_tg.Day << std::endl;
}
