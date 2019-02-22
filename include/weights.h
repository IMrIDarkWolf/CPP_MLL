//
// Created by mr_darkwolf on 21.02.19.
//

#ifndef IRIS_CLASSIFICATION_WEIGHTS_H
#define IRIS_CLASSIFICATION_WEIGHTS_H

#include <vector>

namespace Net {

    struct Neuron {
        // vector of neuron weights
        std::vector< double > weights;
    };

    class Weight {
        // weights vectors
        std::vector< std::vector< Net::Neuron > > weights;

    public:
        Weight(std::vector<unsigned int>);
        Weight &operator=(const Weight &);

        Weight(const Weight &&) = delete;
        Weight &operator=(const Weight &&) = delete;

        // test print weights
        void print_w();
    };
}

#endif //IRIS_CLASSIFICATION_WEIGHTS_H
