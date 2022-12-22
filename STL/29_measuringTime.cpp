#include <iostream> // including this library
using namespace std;
#include <time.h> 
#include <iomanip> // for set precision function
int main() {
	// your code goes here
    time_t start, end; // looks like a class
    time(&start);  //calling some function
    ios_base::sync_with_stdio(false);
	cout<<"Hello World";
    time(&end); //recording end
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
  return 0;
}

