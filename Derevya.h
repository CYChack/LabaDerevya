#ifndef _Derevya_h_
#define _Derevya_h_

class TDerevya
{
protected:
    int rings;
    int typecvetushie;
public:
    TDerevya();
    int GetRings();
    int GetTypecvetushie();

    void SetRings(int r);
    void SetTypecvetushie(int t);

    virtual char* blaga();

};
#endif