#include <stdio.h> 
#include "lib.h"

int main(int arg,char** args){
  printf("%f\n",lib_add(1.0,2.5));
  printf("%f\n",lib_sub(1.0,2.5));
  return(0);
}

