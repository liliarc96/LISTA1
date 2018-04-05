#include <iostream>
#include "Data.h"
using namespace std;

int main()
{
    Data *d = new Data(4, 4, 2018);
    cout << d->toString();
    d->avancarDia();

    return 0;
}
