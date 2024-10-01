#include <iostream>

class Currency
{
  public:
    double conversionRateToUsd = 0.23;

    double convertToUsd(double currency)
    {
        return currency * conversionRateToUsd;
    }
};


int main() {
    Currency colombianPesos;
    colombianPesos.conversionRateToUsd = 0.00026;

    Currency brazilianReals;
    brazilianReals.conversionRateToUsd = 0.19;

    Currency peruvianSoles;
    peruvianSoles.conversionRateToUsd = 0.27;

    double haveColombianPesos;
    double haveBrazilianReals;
    double havePeruvianSoles;
    double haveToUSD;

    std::cout << "Enter number of Colombian Pesos:";
    std::cin >> haveColombianPesos;
    std::cout << "\nEnter number of Brazilian Reals:";
    std::cin >> haveBrazilianReals;
    std::cout << "\nEnter number of Peruvian Soles:";
    std::cin >> havePeruvianSoles;

    haveToUSD = haveColombianPesos + haveBrazilianReals + havePeruvianSoles;


    std::cout << "-----------------------\nUS Dollars = $" << haveToUSD << "\n";
}
