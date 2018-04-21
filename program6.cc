/*
 * Name: Dat Quoc Ngo
 * Email: dqn170000@utdallas.edu
 * Course: CS3377.501
 * Date: 04/20/2018
 */

#include <iostream>
#include "program6.h"

using namespace std;

string array[MATRIX_WIDTH * MATRIX_HEIGHT];

int main()
{
	cout << "Rading the given binary file and draw a matrix" << endl;

	parsing_binary_file("cs3377.bin");
	draw_matrix();
		
	return 0;
}
