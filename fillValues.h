#ifndef FILLVALUES_H_
#define FILLVALUES_H_



#include <iostream>

using namespace std;

void fillRandomValues(int *vec);
void fillValues(int *vec, int numOnes, int numZeros, bool zeroFirst,int startPosition,int endPosition);
int * intdup(int const * src, size_t len);
void fillRandomOne(int *vec);
void fillRandomZero(int *vec);
void fillZeros(int *vec);
void fillOnes(int *vec);

#endif
