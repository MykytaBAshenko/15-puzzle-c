#include "header.h"

bool check_board(int *arr) {
  int numb[] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 32};
  for(int i = 0; i != 16; i++) {
    if(arr[i] != numb[i]) {
      return false;
    }
  }
  return true;
}
