#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>


// define a Memory size that is feasable for our useage

#define MAX_SIZE 2048


#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)


// Q1: Truly Dynamic Arrays

// Make a new larger array (typically you double the size)
//2. Copy all the values over from the old array to the new array
//3. Free the old array memory
//4. Change what your array pointer’s pointee so it refers to the new array


// Struct Super Array 

struct superArray {

	//Array pointer of numbers
	int* a_nums;

	//Static positive size
	unsigned int aSize;

};


// USE "superArray sa" as parameters




superArray enlargeArray(superArray sa) {
	
	// Double memory size


	&sa == (struct superArray*)malloc(sizeof(struct superArray )*2);

	superArray* newArray;



	unsigned int newSize = sa.aSize * 2;

	for (int i = 0;i < sa.aSize * 2;i++) {
	
		newArray->a_nums[i] = sa.a_nums[i];
	}

	//int *newSize = *sa.aSize * 2;

	//int* ptr = (int*)newArray->aSize;
	//newArray->aSize = newSize;





	// sa.a_nums = (int*)realloc(sa.a_nums, newSize);
	newArray->a_nums = (int*)realloc(sa.a_nums, sa.aSize*2);



	int sizeold = sizeof(sa);
	int sizenew = sizeof(newArray);

	printf("The old size was %i Bytes, now its %i Bytes.", sizeold, sizenew);

	if (sa.a_nums == NULL)
		printf("NULL");
	else
		printf("ARRAY WAS DOUBLED\n");
	return sa;

	free(&sa);

	printf("\n Content of new Array");
	for (int j = 0;j < newSize;j++) {
	
		
		printf("%i: %i", j, newArray->a_nums[j]);

	}


}















// Q2. SizeOf Struct


// Static Array Struct
struct student1 {

	char name[20];
	
	int stuNum;
};


struct student2 {

	char* name;

	int studentNum;

};

void sizeTest() {

	// Defined Name and Stu number
	char staticName[20] = "Sanat";
	int stuNum = 12321;

	// Static Struct Define
	student1 *staticStu = (struct student1*)malloc(sizeof(struct student1));



	// StaticStu Name should be Sanat
	staticStu->name == staticName;



	// Dynamic Struct Define
	// NOTE
	// For most dynamic definitions there needs to be a memory allocation of somesort
	student2 *dynStu = (struct student2*)malloc(sizeof(struct student2));


	// Pointer to dynamic name
	

	//char* ptr = dynStu->name;
	
	// Mem allocation size of 2048 Bytes
	dynStu->name = (char*)malloc(MAX_SIZE);
	dynStu->studentNum = { 1234 };
	
	strcpy(dynStu->name, staticName);

	
	// SIZE OF TESTING


	int size1 = sizeof(student1);

	int size2 = sizeof(student2);

	printf("\nSize of static is %i", size1);

	printf("\nSize of Dynamic is %i", size2);


	free(dynStu);
	free(staticStu);


}


void freeStructTest() {

free(dynStu);
	free(staticStu);

	

}


int main() {

	superArray *umber;
	// Setting the Byte size for the a_nums Array
	//umber->aSize = 10;
	//*umber->a_nums = (int)malloc(umber->aSize * sizeof(int));
	
	// 
	




	sizeTest();


	//umber.aSize = 5;

	//umber.a_nums[umber.aSize] = {1,2,3};
	


	return 0;
}
