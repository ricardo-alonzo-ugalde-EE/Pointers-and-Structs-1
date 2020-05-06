/*
Structure and pointers
Here a pointer variable ptr holds the address of a first value (2) of an object cr,
then the address of the pointer variable is incremented by 4 and then its value is displayed
*/

#include <stdio.h>
struct classroom
{
	int students[7];
};

int main()
{
	struct classroom cr = { 2, 3, 5, 7, 11, 13 }; // the seven elements of the structure classrom
	int *ptr; // a pointer declaration
	ptr = (int*)&cr; // the pointer is typecast in type and points to the address of first element of cr
	printf("%d\n", *(ptr)); // the pointer now points to the 1st element of the class?
	printf("%p\n\n", ptr); // the address of the element that the pointer is pointing to
	printf("%d\n", *(ptr + 5)); // the pointer now points to the 5th element of the class?
	printf("%p\n", ptr + 5); // the address of the element that the pointer is pointing to (5th element)
	return 0;
}