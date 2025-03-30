#include <iostream>

double get_total(double prices[]);

int main()
{
    double prices[] = {20.15,36.14,65.36,58.36,96.25};
    double total = get_total(prices);

    //displaying the total price
    std::cout << "Total price: $" << total << std::endl;

    return 0;
}
double get_total(double prices[])
{
    double total = 0;

    for (int i = 0; i < sizeof(prices)/sizeof(double); i++)
    {
        total+=prices[i];
    }
    return total;
}