#include "iva.h"

Tiva::Tiva() : Tcvetushie()
{
    rings = 250;
    typecvetushie = 1;
    kronasize = 60;
}
int Tiva::kolvodrov()
{
    return kronasize * 5;
}
char* Tiva::blaga()
{
    return "slezi";
}