#include <iostream>
#include "rectangle.h"

using namespace std;

int main()
{
    Shapes r(3,10,5);
    r.perimeter();
    r.print();
    r.surface();
    r.print();

}
