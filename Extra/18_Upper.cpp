//leraning it using blackbox method
#include <iostream>
#include <algorithm>  // need to include that library to worl
#include <string>  

using namespace std;

int main()
{
    string input;
    cin >> input;

    transform(input.begin(), input.end(), input.begin(),:: toupper); //this is the main syntax

    cout << input;
    return 0;
}