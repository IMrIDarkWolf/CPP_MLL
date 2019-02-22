//
// Created by mr_darkwolf on 21.02.19.
//

#ifndef IRIS_CLASSIFICATION_WEIGHTS_H
#define IRIS_CLASSIFICATION_WEIGHTS_H

#include <vector>

namespace Net {

    class Neuron {
        // vector of neuron weights
        std::vector< double > weights;

    public:
        Neuron(unsigned long);
        Neuron(const Neuron &);
        Neuron &operator=(const Neuron &);

        bool operator==(const Neuron &) const;
        bool operator!=(const Neuron &) const;

        Neuron(const Neuron &&) = delete;
        Neuron &operator=(const Neuron &&) = delete;

        std::vector<double> get_weight() const;
    };

    class Weight {
        // weights vectors
        std::vector< std::vector< Net::Neuron > > weights;

    public:
        Weight(std::vector<unsigned int>);
        Weight &operator=(const Weight &);

        bool operator==(const Weight &) const;
        bool operator!=(const Weight &) const;

        Weight(const Weight &&) = delete;
        Weight &operator=(const Weight &&) = delete;

        // test print weights
        void print_w() const;
    };
}

#endif //IRIS_CLASSIFICATION_WEIGHTS_H
