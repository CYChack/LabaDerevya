#include <iostream>
using namespace std;

#include "derevya.h"
#include "necvetushie.h"
#include "cvetushie.h"

#include "topol.h"
#include "iva.h"

void main()
{
    TDerevya d1;
    d1.SetRings(600);
    d1.SetTypecvetushie(3);
    cout << "rings d1 = " << d1.GetRings() << "Typecvetushie = " << d1.GetTypecvetushie() << endl;

    Tnecvetushie nec1;
    nec1.SetRings(300);
    nec1.Settopolina(true);
    cout << "rings nec1=" << nec1.GetRings() << "Typecvetushie = " << nec1.GetTypecvetushie() << endl;
    cout << "nec1 give " << nec1.blaga() << "polza = " << nec1.polza() << endl;

    Tcvetushie c1;
    c1.SetRings(500);
    cout << "rings c1=" << c1.GetRings() << "Typecvetushie = " << c1.GetTypecvetushie() << endl;
    cout << "c1 give " << c1.blaga() << "kto to jivet vnutri? " << c1.liveinside() << endl;

    Ttopol topoliniy;
    topoliniy.SetRings(54);
    topoliniy.Settopolina(true);
    cout << "rings topoliniy=" << topoliniy.GetRings() << "Typecvetushie = " << topoliniy.GetTypecvetushie() << endl;
    cout << "topoliniy give " << topoliniy.blaga() << "polza = " << topoliniy.polza() << "koletsa = " << topoliniy.GetKolkost() << endl;

    Tiva plaksivuchaya;
    plaksivuchaya.SetRings(100);
    cout << "rings plaksivuchaya=" << plaksivuchaya.GetRings() << "Typecvetushie = " << plaksivuchaya.GetTypecvetushie() << endl;
    cout << "plaksivuchaya give " << plaksivuchaya.blaga() << "kto to jivet vnutri? " << plaksivuchaya.liveinside() << "daet drov=" << plaksivuchaya.kolvodrov() << endl;

    Tsakura vishnevaya;
    vishnevaya.SetRings(54);
    vishnevaya.Settopolina(false);
    cout << "rings vishnevaya=" << vishnevaya.GetRings() << "Typecvetushie = " << vishnevaya.GetTypecvetushie() << endl;
    cout << "vishnevaya give " << vishnevaya.blaga() << "polza = " << vishnevaya.polza() << "prochnost = " << vishnevaya.GetProchnost() << endl;

    Tbereza sochnaya;
    sochnaya.SetRings(100);
    cout << "rings sochnaya=" << sochnaya.GetRings() << "Typecvetushie = " << sochnaya.GetTypecvetushie() << endl;
    cout << "sochnaya give " << sochnaya.blaga() << "kto to jivet vnutri? " << sochnaya.liveinside() << endl;

    int kolvoderevev = 0;
    cout << "skolko derevev " << endl;
    cin >> kolvoderevev;
    TDerevya** les = 0;
    les = new TDerevya * [kolvoderevev];
    for (int i = 0; i < kolvoderevev; i++)
    {
        int a = 0;
        cout << "chto za derevo?" << endl;
        cin >> a;
        if (a == 0)
            les[i] = new Ttopol();
        topolse
            les[i] = new Tiva();

        cout << "derevo" << i << "daet" << les[i]->blaga() << endl;
    }
}