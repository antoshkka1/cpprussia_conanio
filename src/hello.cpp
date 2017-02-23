#include <hello/hello.h>
#include <iostream>

std::ostream& hello::greet(std::ostream& stream) {
    return stream << "Hello, world\n";
}


int main () {
    hello::greet(std::cout);
}
