/*
 * pointers_with_structures.h
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

#ifndef POINTERS_WITH_STRUCTURES_H_
#define POINTERS_WITH_STRUCTURES_H_


//for code 1
struct Sdataset{
	unsigned char d1;
	unsigned int d2;
	unsigned char d3;
	unsigned short d4;

};
void print_memory_range(char *base,char size);


//for code 2
struct Sperson
{
	char m_name[20];
	int m_id;
	char m_age;
	unsigned int m_salary;
    float m_weight;
};

#endif /* POINTERS_WITH_STRUCTURES_H_ */
