#include "easy.h"
#include <iostream>
#include <cmath>
using namespace std;


int itc_sqrt(int num){
    int kv = 1;
    while (kv * kv < num){
            kv++;
    }
    if (kv * kv == num){
        return kv;
    }
    return -1;
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
double itc_str(int a, int b, int c){
    if (a <= 0 || b <= 0 || c <= 0){
        return -1;
    }
    double p = (a + b + c) / 2;
    return sqrt(p * ((p - a) * (p - b) * (p - c)));

}
double itc_scir(int radius){

    return 3.14 * (radius * radius);
}
