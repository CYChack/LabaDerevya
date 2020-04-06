#include "derevya.h"
#include <iostream>

TDerevya::TDerevya()
{
    rings = 0;
    typecvetushie = 0;
}
int TDerevya::GetRings()
{
    return rings;
}
int TDerevya::GetTypecvetushie()
{
    return typecvetushie;
}
void TDerevya::SetRings(int r)
{
    if (r >= 0)
        rings = r;
}
void TDerevya::SetTypecvetushie(int t)
{
    if (t > 0 && t < 4)
        typecvetushie = t;
}
char* TDerevya::blaga()
{
    return "";
}