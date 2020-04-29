#ifndef ML_H_
#define ML_H_

#include <vector>

namespace machinelearning {

	class MachineLearning {

	public:

		// Train
		virtual void Train(const char*) = 0;

		virtual std::vector<int> Predict(const char*, bool) = 0;

		// Accuracy of network
		void Accuracy(std::vector<int>&, std::vector<int>&) const;

	protected:
		virtual void ParseConfiguration(const char*) = 0;
		int num_train_instances_;  // store the number of training instances
		int num_test_instances_;   // store the number of testing instances
	};

}  // namespace machinelearning
#endif