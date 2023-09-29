#include "psn.h"
#include <iostream>

using namespace std;

void printASequenceOfNumbers(int n) {
  for (int i=0; i<2*n; ++i)
    cout << i << " ";
  cout << endl;
}
