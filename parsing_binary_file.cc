/*
 * Name: Dat Quoc Ngo
 * Email: dqn170000@utdallas.edu
 * Course: CS3377.501
 * Date: 04/20/2018
 * */

#include <iostream>
#include "program6.h"
#include <fstream>
#include <stdio.h>
#include <stdint.h>

using namespace std;

void parsing_binary_file(string binary_file)
{
	char buffer[1024];
	BinaryFileHeader *myRecordHeader = new BinaryFileHeader();
	BinaryFileRecord *myFileRecord = new BinaryFileRecord();
        fstream myFile;
        
	//open file
	myFile.open("cs3377.bin", ios::in | ios::binary);
	
	//read BinaryFileHeader
	myFile.read((char*)myRecordHeader, sizeof(BinaryFileHeader));
	
	//read magicNumber
	sprintf(buffer, "%x", myRecordHeader->magicNumber);
	array[0] = "Magic: 0x";
	array[0] = array[0] + buffer;

	//read versionNUmber
	sprintf(buffer, "%u", myRecordHeader->versionNumber);
	array[1] = "Version: ";
	array[1] = array[1] + buffer;

	//readnumRecords
	sprintf(buffer, "%lx", myRecordHeader->numRecords);
	array[2] = "NumRecords: ";
	array[2] = array[2] + buffer;

	//read BinaryFileRecord
	for(unsigned int i = 0; i < myRecordHeader->numRecords; i++)
	{
		myFile.read((char*)myFileRecord, sizeof(BinaryFileRecord));
		sprintf(buffer, "%u", myFileRecord->strLength);
		array[i+3] = "strlen: ";
		array[i+3] = array[i+3] + buffer;
		
		sprintf(buffer, "%s", myFileRecord->stringBuffer);
		array[i+7] = buffer;
	}																								
	
	myFile.close();
}
