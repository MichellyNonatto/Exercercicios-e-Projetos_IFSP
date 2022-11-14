#include "conversor.h"
#include <stdio.h>

float kelvin(float k) {
  float tf;
  tf = (k - 273.15) * 1.8 + 32;
  return tf;
}
