#ifndef STRUCT_H
#define STRUCT_H
#include <stdio.h>
/**
 *struct dog -short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif