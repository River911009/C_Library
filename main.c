#include <stdio.h> 
#include "lib.h"

int main(int arg,char** args){
  int mat[4][3]={{1,2,3},{4,5,6},{7,8,9},{0,1,2}};
  int c=0,*ret_mat;

  ret_mat=lib_array((int*)mat,3,4);
  printf("\n");
  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      printf("%d ",ret_mat[c++]);
    }
    printf("\n");
  }
  printf("%f\n",lib_add(1.0,2.5));
  printf("%f\n",lib_sub(1.0,2.5));
  return(0);
}

