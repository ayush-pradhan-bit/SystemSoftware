//File: struct.h
//Author: Ayush Pradhan
//Description: This is a heade file for Array

#ifndef STRUCT_H
#define STRUCT_H



struct student //Structure declaration
{
    char name[20];
    int rollnum;
	char nationality[30];
	float grade;
};

//prototypes
void arrayPrint(struct student *arrayPointer, int studSize);
void fillingstudent(struct student *arrayPointer, int studSize);

#endif /* STRUCT_H */

