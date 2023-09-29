/*
 * pointers_with_structures.c
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

//for code 1
void print_memory_range(char *base,char size)
{

	int i;
	for(i=0; i<size;i++)
	{
		printf("%p  val=%x \n",base,(unsigned char)*base);
		base++;
	}
}
