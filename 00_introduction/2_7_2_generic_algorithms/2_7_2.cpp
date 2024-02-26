template<class In, class Out> void copy(In from, In too_far, Out to)
{
    while (from != too_far){
        *to = *from;            // copy element referred to
        ++to;                   // next output
        ++from;                 // next input
    }
}

char vc1[200];          // array of 200 characters
char vc2[500];          // array of 500 characters

void f()
{
    copy(&vc1[0], &vc1[200], &vc2[0]);
}

//
// #include <complex>
// #include <vector>
// #include <list>

// std::complex<double> ac[200];

// void g(std::vector< std::complex<double> >& vc, std::list< std::complex<double> >& lc)
// {
//     copy(&ac[0], &ac[200], lc.begin());
//     copy(lc.begin(), lc.end(), vc.begin());
// }

