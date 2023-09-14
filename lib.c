#include <stdio.h>

float lib_add(float x,float y){
  printf("ADD %f and %f:\n",x,y);
  return(x+y);
}

float lib_sub(float x,float y){
  printf("SUB %f by %f:\n",x,y);
  return(x-y);
}

