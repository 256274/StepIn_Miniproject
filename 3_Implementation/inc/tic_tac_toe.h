
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define CPUMOVE 'O'
#define PLAYERMOVE 'X'
#define SIDE 3
#define CPU 1
#define PLAYER 2

/**
 * @file tic_tac_toe.h
 * @author 256274 Gatla Sumanth Reddy
 * @brief this files includes all the required funtion deifnitoons used in the project
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef  __TTT_H__
#define  __TTT_H__

void delay(long long int j);
/**
 * @brief funtion to show the board
 * 
 */
void Display_TicTacToe_Board(char board[][SIDE]);

/**
 * @brief funtion which gives the instructions of the game
 * 
 */
void Game_instructions();

/**
 * @brief initializes the game. It reads a 2D array to know the cell address of the board
 * @param SIZE.
 */
void initialize_Game(char (*board)[SIDE], int moves[]);

int gameover();

/**
 * @brief Displays the winner name
 * 
 */
void Declare_Winner(int Turn); 


/**
 * @brief Starts the game
 * 
 * @param CPU 
 */
void Play_Game(int Turn);


#endif