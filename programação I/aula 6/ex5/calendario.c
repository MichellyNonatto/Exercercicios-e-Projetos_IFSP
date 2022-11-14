#include <stdio.h>
#include "calendario.h"

int data (){
  int v;
    scanf("%d",&v);
  return v;
}

float dataJuliana (int a, int m, int d){
  float dataJ;
  dataJ = (1461*(a+4800+(m-14)/12))/4+(367*(m-2-12*((m-14)/12)))/12-(3*((a+4900+(m-14)/12)/100))/4+d-32075;
  return dataJ;
}