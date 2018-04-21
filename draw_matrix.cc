/*
 * Name: Dat Quoc Ngo
 * Email: dqn170000@utdallas.edu
 * Course: CS3377.501
 * Date: 04/20/2018
 */

#include <iostream>
#include "cdk.h"
#include "program6.h"

#define MATRIX_NAME_STRING "Binary File Contents"

using namespace std;

void  draw_matrix()
{

	WINDOW		*window;
  	CDKSCREEN	*cdkscreen;
  	CDKMATRIX     *myMatrix;           // CDK Screen Matrix

  	const char 		*rowTitles[MATRIX_HEIGHT+1] = {"R0", "a", "b", "c", "d", "e"};
  	const char 		*columnTitles[MATRIX_WIDTH+1] = {"C0", "a", "b", "c"};
  	int		boxWidths[MATRIX_WIDTH+1] = {BOX_WIDTH, BOX_WIDTH, BOX_WIDTH, BOX_WIDTH};
  	int		boxTypes[MATRIX_WIDTH+1] = {vMIXED, vMIXED, vMIXED, vMIXED};

  	/*
   	* Initialize the Cdk screen.
   	*
   	* Make sure the putty terminal is large enough
   	*/
  	window = initscr();
  	cdkscreen = initCDKScreen(window);

  	/* Start CDK Colors */
  	initCDKColor();

  	/*
   	* Create the matrix.  Need to manually cast (const char**) to (char **)
 	*/
  	myMatrix = newCDKMatrix(cdkscreen, CENTER, CENTER, MATRIX_HEIGHT, MATRIX_WIDTH, MATRIX_HEIGHT, MATRIX_WIDTH,
			  MATRIX_NAME_STRING, (char **) rowTitles, (char **) columnTitles, boxWidths,
				     boxTypes, 1, 1, ' ', ROW, true, true, false);

 	if (myMatrix ==NULL)
    	{
      		printf("Error creating Matrix\n");
      		_exit(1);
    	}

 	 /* Display the Matrix */
  	drawCDKMatrix(myMatrix, true);

  	/*
  	* Dipslay a message
   	*/
	
	setCDKMatrixCell(myMatrix, 1, 1, array[0].c_str());
	setCDKMatrixCell(myMatrix, 1, 2, array[1].c_str());
	setCDKMatrixCell(myMatrix, 1, 3, array[2].c_str());
	setCDKMatrixCell(myMatrix, 2, 1, array[3].c_str());
	setCDKMatrixCell(myMatrix, 2, 2, array[7].c_str());
	setCDKMatrixCell(myMatrix, 3, 1, array[4].c_str());
	setCDKMatrixCell(myMatrix, 3, 2, array[8].c_str());
	setCDKMatrixCell(myMatrix, 4, 1, array[5].c_str());
	setCDKMatrixCell(myMatrix, 4, 2, array[9].c_str());
	setCDKMatrixCell(myMatrix, 5, 1, array[6].c_str());
	setCDKMatrixCell(myMatrix, 5, 2, array[10].c_str());
	
	drawCDKMatrix(myMatrix, true);    /* required  */
	
  	/* so we can see results */
  	sleep (10);


  	// Cleanup screen
  	endCDK();

}
