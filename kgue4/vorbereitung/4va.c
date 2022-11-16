#include <stdio.h>


int f1(int);
int f2(float);
int f3();
int f4(int);
int x;

int f1(int p) {
    float x;
//    ... x ... // ?
//    ... p ... // ?
    }
int f2(float p) {
    int x;
//    .. x ... // ?
//    .. p ... // ?
}

int f3() {
    int f1;
//    ... x ... // ?
//    ... f1 ... // ?
//    ... f2 ... // ?
}


int main () {
    return(0);
}