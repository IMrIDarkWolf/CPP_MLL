//
// Created by mr_darkwolf on 21.02.19.
//

#include <iostream>
#include <vector>
#include <weights.h>

namespace Net {

    //--------------------------------------------------

    Neuron::Neuron(unsigned long count) {
        weights.resize(count);
    }

    Neuron::Neuron(const Net::Neuron &neuron) {
        weights = neuron.weights;
    }

    Neuron& Neuron::operator=(const Net::Neuron &neuron) {
        if (this != &neuron) {
            weights = neuron.weights;
        }
        return *this;
    }

    bool Neuron::operator==(const Net::Neuron &neuron) const {
        return weights == neuron.weights;
    }

    bool Neuron::operator!=(const Net::Neuron &neuron) const {
        return !(*this == neuron);
    }

    std::vector<double > Neuron::get_weight() const {
        return weights;
    }

    //--------------------------------------------------

    Weight::Weight(std::vector<unsigned int> arch) {
        std::vector< Neuron > dim;
        for (std::size_t i = 0; i < arch.size() - 1; ++i) {
            for (int j = 0; j < arch[i]; ++j) {
                Neuron neuron(arch[i + 1]);
                dim.push_back(neuron);
            }
            weights.push_back(dim);
            dim.clear();
        }
    }

    bool Weight::operator==(const Net::Weight &_w) const {
        return weights == _w.weights;
    }

    bool Weight::operator!=(const Net::Weight &_w) const {
        return !(*this == _w);
    }

    Weight& Weight::operator=(const Net::Weight &_w) {
        if (this != &_w) {
            weights = _w.weights;
        }
        return *this;
    }

    void Weight::print_w() const {
        for (std::size_t i = 0; i < weights.size(); ++i) {
            for (std::size_t j = 0; j < weights[i].size(); ++j) {
                for (std::size_t k = 0; k < weights[i][j].get_weight().size(); ++k) {
                    std::cout << weights[i][j].get_weight()[k] << " ";
                }
                std::cout << std::endl;
            }
            std::cout << std::endl << std::endl;
        }
    }

    //---------------------------------------------------
}
