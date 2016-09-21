#include "fillValues.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

void fillValues(int *vec, int numOnes, int numZeros, bool zeroFirst,int startPosition,int endPosition){

	int vectLimit = endPosition - startPosition;
	int index = 0;
	//Filling number of Zeros

	int startPos = (zeroFirst == true) ? startPosition : startPosition + numOnes;
	int zeros = 0;
	for(int index = startPos; index < vectLimit; index++){
		
		vec[index] = 0;
		zeros++;
		
		if(zeros == numZeros){
			index += numOnes;
			zeros = 0;
			
		}
	
	}

	//Filling number Of Ones
	startPos = (zeroFirst == false) ? startPosition : startPosition + numZeros ;
	int ones = 0;
	for(int index = startPos; index < vectLimit; index++){
		
		vec[index] = 1;
		ones++;
		
		if(ones == numOnes){
			index += numZeros;
			ones = 0;
		}
	
	}

}

int * intdup(int const * src, size_t len)
{
	int * p = (int*) malloc(len * sizeof(int));
	memcpy(p, src, len * sizeof(int));
	return p;
}


void fillRandomValues(int *vec){

	int startPos = 0,endPos = 30,numZeros  = 10,numOnes = 20;
	fillValues(vec, numOnes, numZeros, false,startPos,endPos);
	startPos = 30,endPos = 90,numZeros  = 60,numOnes = 1;
	fillValues(vec, numOnes, numZeros, true,startPos,endPos);
	startPos = 90,endPos = 150,numZeros  = 1,numOnes = 120;
	fillValues(vec, numOnes, numZeros, false,startPos,endPos);


}


void fillRandomOne(int *vec){


	int randVal = rand() % 150; 
	vec[randVal] = 1;
		

}

void fillRandomZero(int *vec){

		int randVal = rand() % 150; 
		vec[randVal] = 0;

	

}


void fillZeros(int *vec){

	for(int index = 0; index < 150; index++){
		
			vec[index] = 0;
			
		
	}
	
}

void fillOnes(int *vec){

	for(int index = 0; index < 150; index++){
		
			vec[index] = 1;
			
		
	}
	
}

