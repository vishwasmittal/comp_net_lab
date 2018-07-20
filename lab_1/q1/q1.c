/*
 * This program demonstrates the uses of some of the gcc flags
 *
 *
 * -c: Compile and assemble, but do not link
 * -S: Compile only; do not assemble or link
 * -E: Preprocess only; do not compile, assemble or link
 * -o <file>: Place the output into <file>
*/


#include <iostream>
using namespace std;

int main(){
	int x = 55;
	int y = 45;
	
	int sum = x + y; // sum = 100
	
	cout << sum << endl;
	
	return 0;
}
