#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int guitars;
    string name, instrument, progname = "Shangrila";

    cout << "Hello, welcome to " << progname << endl;
    cout << "What's your name? Enter Name: ";
    getline(cin, name);
    cout << "How many guitars do you own? Guitars: ";
    cin >> guitars;
    
    if (guitars > 1)
        instrument = " guitars.";
    else
        instrument = " guitar.";
    cout << name << " owns " << guitars << instrument << endl; 

    return 0;
}