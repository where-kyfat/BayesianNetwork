#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include "bayesiannetwork.h"

using namespace std;

int main() {
	std::ifstream arg;
	string train;
	string test;
	string cfg;
	clock_t begin;
	clock_t end;
	double time_spent;
	vector<int> prediction_result;

	arg.open("bayesian_network/input.txt");
	arg >> cfg;
	arg >> train;
	arg >> test;

	begin = clock();
	machinelearning::baysian::BayesianNetwork bnetwork(cfg.c_str());
	bnetwork.Train(train.c_str());
	prediction_result = bnetwork.Predict(test.c_str(), 1);

	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	std::cout << "Time spent " << time_spent << " seconds " << std::endl;
	return 0;
}
