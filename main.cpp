#include <iostream>
#include "fillValues.h"
#include "Combination.h"
#include <cstdlib>


using namespace std;

double eval(int *pj);





int main()
{
	srand(time(NULL));
	int limit = 150;
	int vec[limit];
	
	double maxFitness = 0.0,fitness = 0.0;
	int *bestValues;

	Combination *combinations = getCombinations();

	for(int i = 0; i < 172; i++){

		
	Combination comb = combinations[i];
	fillValues(vec, comb.numOnes, comb.numZeros, comb.firstFillZero,0,limit);
		
	for(int j = 0;j < 20;j++){


	if( j == 0){
		
	}
	else {

		if( i % 2 == 0){
			fillRandomZero(vec);
		}
		else{
			fillRandomOne(vec);
		}
	}
	
	fitness = eval(vec);
		
	if(fitness > maxFitness){

		maxFitness = fitness;
		bestValues = intdup(vec,limit);

	}

	}

	}

	fillZeros(vec);
	
	for(int i = 0; i < 150; i++){
		fillRandomOne(vec);
		fitness = eval(vec);
			
	if(fitness > maxFitness){

		maxFitness = fitness;
		bestValues = intdup(vec,limit);

	}

	}
	
	fillOnes(vec);
	
	for(int i = 0; i < 150; i++){
		fillRandomZero(vec);
		fitness = eval(vec);
			
	if(fitness > maxFitness){

		maxFitness = fitness;
		bestValues = intdup(vec,limit);

	}

	}
	

	cout << "Best Fitness is" << maxFitness << endl;
	cout << "Values are" << endl;
	for(int index = 0; index < limit;index++){
		cout << bestValues[index];
	}
	cout << endl;

}

