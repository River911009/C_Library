#include <stdio.h>

float lib_add(float x,float y){
  printf("ADD %f and %f:\n",x,y);
  return(x+y);
}

float lib_sub(float x,float y){
  printf("SUB %f by %f:\n",x,y);
  return(x-y);
}

int* lib_array(int* mat,int x,int y){
  int c=0;
  for(int i=0;i<y;i++){
    for(int j=0;j<x;j++){
      printf("%d ",mat[c++]);
    }
    printf("\n");
  }
  return(mat);
}

