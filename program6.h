#ifndef _PROGRAM6_H
#define _PROGRAM6_H

/*
 * Name: Dat QUoc Ngo
 * Email: dqn170000@utdallas.edu
 * Course: CS3377.501
 * Date: 04/20/2018
 * */
#include <stdint.h>
#define MATRIX_WIDTH 3
#define MATRIX_HEIGHT 5
#define BOX_WIDTH 15

extern std::string array[];

extern void parsing_binary_file( std::string);

extern void draw_matrix();

class BinaryFileHeader
{
	public:
		uint32_t magicNumber;
		uint32_t versionNumber;
		uint64_t numRecords;
};

const int maxRecordStringLength = 25;

class BinaryFileRecord
{
	public:
		uint8_t strLength;
		char stringBuffer[maxRecordStringLength];
};


#endif


