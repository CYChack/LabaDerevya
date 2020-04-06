#include "cvetushie.h"
#include <stdlib.h>

Tcvetushie::Tcvetushie() : TDerevya()
{
    rings = 4;
    typecvetushie = 2;
    kronasize = 40;
}
int Tcvetushie::GetKronasize()
{
    return kronasize;
}
bool Tcvetushie::liveinside()
{
    return liveinside;
}
char* Tcvetushie::blaga()
{
    return "blaga";
}