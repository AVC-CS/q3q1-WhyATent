#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double firstpart, positive, negative, firstroot, secondroot;
    cout << "Input three (double) values in a line separated by spaces (e.g., a b c):\n";
    cin >> a >> b >> c;
    // The quadratic equation was provided in question 1 of the quiz. Since it will be difficult to do the whole thing in one go (for me), I will separate the various parts. That was, when I do the +-, I can create two different square roots. 
    firstpart = b * b - (4 * a * c);
    positive = -b + sqrt(firstpart);
    negative = -b - sqrt(firstpart);
    firstroot = positive/(2 * a);
    secondroot = negative/(2 * a);

    cout << setprecision(2) << fixed;
    if (firstroot > secondroot)
        cout << "roots " << firstroot << " " << secondroot << endl;
    else{
        cout << "roots " << secondroot << " " << firstroot << endl;
    }
    return 0;
}
