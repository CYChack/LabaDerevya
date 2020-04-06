#ifndef _topol_h_
#define _topol_h_
#include "necvetushie.h"
#include <string>
class Ttopol :public Tnecvetushie
{
private:
    int kolkost;
public:
    Ttopol();
    int GetKolkost();
    virtual char* blaga();

};
#endif