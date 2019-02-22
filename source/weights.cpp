//
// Created by mr_darkwolf on 21.02.19.
//

#include <iostream>
#include <vector>
#include <weights.h>

namespace Net {
    Weight::Weight(std::vector<unsigned int> arch) {
        std::vector< Neuron > dim;
        Neuron neuron;
        for (std::size_t i = 0; i < arch.size() - 1; ++i) {
            for (int j = 0; j < arch[i]; ++j) {
                neuron.weights.resize(arch[i + 1]);
                dim.push_back(neuron);
            }
            weights.push_back(dim);
            dim.clear();
        }
    }

    Weight& Weight::operator=(const Net::Weight &_w) {
        if (_w.weights != weights) {
            std::cout << true;
        }
        return *this;
    }

    void Weight::print_w() {
        for (std::size_t i = 0; i < weights.size(); ++i) {
            for (std::size_t j = 0; j < weights[i].size(); ++j) {
                for (std::size_t k = 0; k < weights[i][j].weights.size(); ++k) {
                    std::cout << weights[i][j].weights[k] << " ";
                }
                std::cout << std::endl;
            }
            std::cout << std::endl << std::endl;
        }
    }
}
