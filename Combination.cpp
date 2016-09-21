#include "Combination.h"
#include <iostream>

Combination combinations[172];

Combination* getCombinations(){
	
	int startPos = 1,limit = 11,combCount = 0, i = 0;
	//Increment and Decrement Combination
	for(i = startPos;i < limit;i++){
		
		Combination combZero,combOne;
		
		combZero.numOnes = i;
		combZero.numZeros = limit - i;
		combZero.firstFillZero = false;
		combinations[combCount] = combZero;
		combCount++;
		//Flipping
		combOne.numOnes = limit - i;
		combOne.numZeros = i;
		combOne.firstFillZero = true;
		combinations[combCount] = combOne;
		combCount++;
		
	}	
	
	startPos = 5;
	limit = 80;
	
	//Equal Combination
	for(int i = startPos;i < limit;i++){
	
		Combination combEqual,combEqualFlip;

		combEqual.numOnes = i;
		combEqual.numZeros = i;
		combEqual.firstFillZero = false;
		combinations[combCount] = combEqual;
		combCount++;

		combEqualFlip.numOnes = i;
		combEqualFlip.numZeros = i;
		combEqualFlip.firstFillZero = true;
		combinations[combCount] = combEqualFlip;
		combCount++;
			
			
	}
	
	//Random Combination
	Combination rcombOne,rcombTwo;
	rcombOne.numOnes = 100;
	rcombOne.numZeros = 50;
	rcombOne.firstFillZero = false;
	combinations[combCount] = rcombOne;
	combCount++;

	rcombTwo.numOnes = 70;
	rcombTwo.numZeros = 80;
	rcombTwo.firstFillZero = true;
	combinations[combCount] = rcombTwo;

	return combinations;

	
}
