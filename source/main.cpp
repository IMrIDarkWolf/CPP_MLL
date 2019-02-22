#include <iostream>
#include <weights.h>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<unsigned int> vec = {3, 3, 3, 1};
    Net::Weight w(vec);
    w.print_w();
}