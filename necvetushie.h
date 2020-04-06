#ifndef _necvetushie_h_
#define _necvetushie_h_

#include "derevya.h"

class Tnecvetushie : public TDerevya
{
protected:
    bool topolina;
public:
    Tnecvetushie();
    bool Gettopolina();
    void Settopolina(bool e);
    int polza();
    virtual char* blaga();

};
#endif