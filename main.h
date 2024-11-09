#ifndef __MAIN_H
#define __MAIN_H

#include <stdio.h>

int sum(int a, int b);
float inc(float d, float e);


#endif

int sum(int a, int b){
    return a+b;
}

float inc(float d, float e){
    return d/e;
}