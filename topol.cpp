#include "topol.h"
#include <stdlib.h>
Ttopol::Ttopol() :Tnecvetushie()
{
    rings = 3;
    typecvetushie = 3;
    topolina = true;
}
int Ttopol::GetKolkost()
{
    return rand() % 10;
}
char* Ttopol::blaga()
{
    return "puh";
}