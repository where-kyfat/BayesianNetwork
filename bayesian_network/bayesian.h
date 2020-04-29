#ifndef BAYESIAN_H_
#define BAYESIAN_H_

#include "machinelearning.h"

namespace machinelearning {
	namespace baysian {

		class Bayesian : public MachineLearning {

		protected:

			// Parser
			void ParseConfiguration(const char*);

			// This array store the total number of each decision's class in training data
			double* num_class_for_each_attributes_;

			// This array store the information about each attribute is continuous or not
			int* is_discrete_;

			// This array store the number of classes of each attribute
			int* num_class_for_each_attribute_;

			// Store the number of attributes
			int num_attributes_;

			// The number of output classes
			int num_output_class_;
		};

	}  // namespace baysian
}  // namespace machinelearning
#endif