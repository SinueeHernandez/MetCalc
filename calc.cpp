#include "calc.h"

using namespace std;

namespace Calc
{
    int sum(int a, int b)
    {
        int result;
        result = a + b;
        return result;
    }

    void doSomething()
    {
        int i = 0;
        std::cout << "Suma = " << sum(3, 5);
        std::cin >> i;
    }
}

int main()
{
    Calc::doSomething();
    return 0;
}
