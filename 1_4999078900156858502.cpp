#include <iostream>
#include <stdlib.h>
#include <math.h> 

using namespace std;


int main()
{   
    double num, inteiro, frac;
    int a, b, c, d, e, f, g, h, i, j, z, w;
    a = b = c = d = e = f = g = h = i = j = z = w = 0;
    cin >> num;
    frac = modf(num , &inteiro);
    if(num >= 100){
        modf(num , &inteiro);
        a = inteiro/100;
        num -= 100*a;
    }if (num >= 50) {
         modf(num , &inteiro);
        b = inteiro/50;
        num -= 50*b;
    }if (num >= 20) {
         modf(num , &inteiro);
        c = inteiro/20;
        num -= 20*c;
    }if (num >= 10) {
         modf(num , &inteiro);
        d = inteiro/10;
        num -= 10*d;
    }if (num >= 5) {
         modf(num , &inteiro);
        e = inteiro/5;
        num -= 5*e;
    }if (num >= 2) {
         modf(num , &inteiro);
        f = inteiro/2;
        num -= 2*f;
    }if (num >= 1) {
         modf(num , &inteiro);
        g = inteiro;
        num -= g;
    }if (frac >= 0.50) {
        h = frac/0.50;
        frac -= 0.50*h;
    }if (frac >= 0.25) {
        i = frac/0.25;
        frac -= 0.25*i;
    }if (frac >= 0.10) {
        j = frac/0.10;
        frac -= 0.10*j;
    }if (frac >= 0.05) {
        z = frac/0.05;
        frac -= 0.05*z;
    }if (frac >= 0.01) {
        cout << frac*100;
        w = frac*100;
    }
    cout << a <<endl << b <<endl << c <<endl << d <<endl << e <<endl
    << f <<endl << g << endl << h << endl << i << endl << j << endl
     << z << endl << w << endl;
    
    return 0;
}
