#include "easy.h"
#include <iostream>
using namespace std;


int itc_sqrt(int num){
    if (num == 0){
        return 0;
    }
    if (num < 0){
        return -1;
    }
    long long kv = 1;
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
double itc_str(int a, int b, int c) {
  if (a + b < c || a + c < b || b + c < a) {
    return -1;
  }
  int p = (a + b + c) / 2;
  return p * (p - a) * (p - b) * (p - c);
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
