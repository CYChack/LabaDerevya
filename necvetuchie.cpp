#include "necvetushie.h"
#include "stdlib.h"

Tnecvetushie::Tnecvetushie() : TDerevya()
{
    rings = 1;
    typecvetushie = 3;
    topolina = true;
}
bool Tnecvetushie::Gettopolina()
{
    return topolina;
}
void Tnecvetushie::Settopolina(bool e)
{
    topolina = e;
}
int Tnecvetushie::polza()
{
    return rand() % 100;
}
char* Tnecvetushie::blaga()
{
    return "seeds";
}