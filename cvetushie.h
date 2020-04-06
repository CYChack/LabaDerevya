#ifndef _cvetushie_h_
#define _cvetushie_h_

#include "derevya.h"

class Tcvetushie : public TDerevya
{
protected:
    int kronasize;
public:
    Tcvetushie();
    int GetKronasize();
    bool liveinside();
    virtual char* blaga();
};
#endif