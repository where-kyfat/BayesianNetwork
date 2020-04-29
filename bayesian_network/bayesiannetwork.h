#ifndef BAYESIANNETWORK_H_
#define BAYESIANNETWORK_H_

#include "bayesian.h"

namespace machinelearning {
	namespace baysian {

		class BayesianNetwork : public Bayesian {

		public:

			// Constructor
			BayesianNetwork(const char*);

			// Destructor
			~BayesianNetwork();

			// Initialize all the information from training data
			std::vector<int> Predict(const char*, bool);

			// Calculate the probability of each choice and choose the greatest one as our
			// prediction
			void Train(const char*);

		private:

			// (Условная вероятность)
			long double*** conditional_probability_table_;

			int** nodes_parents_;
		};

		template <class Type>
		struct KeyAndTwoValue {
			double key;
			Type value1;
			Type value2;
		};

	}  // namespace baysian
}  // namespace machinelearning
#endif