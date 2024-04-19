#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159265359;

    // Definindo a precisão decimal para 2
    std::cout.width(49);
    std::cout.fill('a');
    std::cout << std::fixed << std::setprecision(11) << "O valor de pi : " << pi << std::endl;

    return 0;
}