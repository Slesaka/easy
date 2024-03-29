#include "easy.h"
#include <iostream>
using namespace std;


int itc_sqrt(int num) {
    if (num == 0) {
        return 0;
    }
    if (num < 0) {
        return -1;
    }
    long long kv = 1;
    while (kv * kv < num) {
        kv++;
    }

    if (kv * kv == num) {
        return kv;
    }

    if (kv * kv != num) {
        return -1;
    }

}


int itc_skv(int num){
    if (num <= 0){
        return -1;
    }
    return num * num;
}
int itc_spr(int a, int b){
    if (a <= 0 || b <= 0){
        return -1;
    }
    return a * b;
}
int itc_str(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return -1;
    }
    if (a + b <= c || a + c <= b || c + b <= a) {
        return -1;
    }
    double p = (a + b + c) / 2.0;
    return itc_sqrt(p * ((p - a) * (p - b) * (p - c)));

}
double itc_scir(int radius){
    if (radius < 0){
        return -1;
    }
    if (radius == 0){
        return 0;
    }
    return 3.14 * (radius * radius);
}
