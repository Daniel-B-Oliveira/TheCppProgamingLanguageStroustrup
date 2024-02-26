// Write a program that prints the sizes of the fundamental types, a few pointer type, and a few enumerations of your choice, Use the sizeof operator.

#include <iostream>

#include <string>

using namespace std;

// size_t bool_size (bool bl) {return sizeof(bl); }
// size_t char_size (char ch) { return sizeof(ch); }
// size_t int_size (int i) { return sizeof(i); }
// size_t float_size (float flt) { return sizeof(flt); }


void bool_size (bool _bl) {cout<<"size of "<<_bl<<": "<<sizeof(_bl)<<'\n';}
void bool_p_size (bool* _bl) {cout<<"size of "<<_bl<<": "<<sizeof(_bl)<<'\n';}

void char_size (char _ch) {cout<<"size of "<< _ch<<": "<<sizeof(_ch)<<'\n';}
void char_p_size (char* _ch) {cout<<"size of "<< _ch<<": "<<sizeof(_ch)<<'\n';}

void int_size (int _i) {cout<<"size of "<< _i <<": "<<sizeof(_i)<<'\n';}
void int_p_size (int* _i) {cout<<"size of "<< _i<<": "<<sizeof(_i)<<'\n';}

void float_size (float _flt) {cout<<"size of "<<_flt<<": "<<sizeof(_flt)<<'\n';}
void float_p_size (float* _flt) {cout<<"size of "<<_flt<<": "<<sizeof(_flt)<<'\n';}

int main()
{
    bool bl = true;
    char ch = 'c';
    int i = 19;
    float flt = 3.14;

    bool_size (bl);
    char_size (ch);
    int_size (i);
    float_size (flt);

    bool* bl_p = &bl;
    char* ch_p = &ch;
    int* i_p = &i;
    float* flt_p = &flt;

    bool_p_size(bl_p);
    char_p_size(ch_p);
    int_p_size(i_p);
    float_p_size(flt_p); 

    enum boxes {n1 = 4, n2 = 16, n3 = 64};
    cout<<"size of boxes is: "<<sizeof(boxes);

}