#include <bits/stdc++.h>
#include <sstream>
#include <iostream>
using namespace std;


int main(int argc, char ** args){
	int first_operand;
	int second_operand;
	char operation;
		first_operand = atoi(args[1]);
		//cout << args[0] << " " << args[1] << " " << args[2] << " " << args[3];
			operation = args[2][0];
			second_operand = atoi(args[3]);
	
	switch(operation){
		case '+': cout << first_operand + second_operand; break;
		case '-': cout << first_operand - second_operand; break;
		case '*': cout << first_operand * second_operand; break;
		case '/': cout << first_operand / second_operand; break;
	}
	cout<< endl;
	
	
	return 0;
}
