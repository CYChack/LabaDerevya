#ifndef _sakura_h_
#define _sakura_h_
#include "necvetushie.h"
#include <string>
class Tsakura :public Tnecvetushie
{
private:
    int prochnost;
public:
    Tsakura();
    int GetProchnost();
    virtual char* blaga();

};
#endif