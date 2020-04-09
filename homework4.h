/*
 * homework4.h
 *
 *  Created on: 04/05/2020
 *      Author: TJ Koonce
 */

#ifndef HOMEWORK4_H_
#define HOMEWORK4_H_

typedef enum {first, second, third, fourth} stateMachine_t;

// This function initializes the board by turning off the Watchdog Timer.
void initBoard();
bool charFSM(char rChar, stateMachine_t *print);

// TODO: Define any constants that are local to homework.c using #define

#endif /* HOMEWORK4_H_ */
