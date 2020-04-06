#include "sakura.h"
#include <stdlib.h>
Tsakura::Tsakura() :Tnecvetushie()
{
    rings = 3;
    typecvetushie = 3;
    topolina = true;
}
int Tsakura::GetProchnost()
{
    return rand() % 100;
}
char* Tsakura::blaga()
{
    return "vishnya";
}