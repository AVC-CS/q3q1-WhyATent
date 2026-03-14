#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    // TODO
    cout << "Input three (double) values in a line separated by spaces (e.g., a b c):\n";
    cin >> a >> b >> c;
    // The quadratic equation was provided in question 1 of the quiz. Since it will be difficult to do the whole thing in one go (for me), I will separate the various parts. That was, when I do the +-, I can create two different square roots. 
   double firstpart, firstroot, secondroot;
    firstpart = (sqrt((b*b)-(4*a*c))/2*a);
    firstroot = -b + firstpart;
    secondroot = -b + firstpart;

    cout << setprecision(2) << fixed;
    cout << firstroot << " " << secondroot << endl;

    return 0;
}
