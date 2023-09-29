/*
 * pointer_to_function.h
 *
 *  Created on: ???/???/????
 *      Author: ashraf
 */

#ifndef POINTER_TO_FUNCTION_H_
#define POINTER_TO_FUNCTION_H_

//for code 1
void print_hello();
void(* GP_FUN)();

//for code 2
void check(char *a,char *b, int (* p_fun)(char *,char *));


#endif /* POINTER_TO_FUNCTION_H_ */
