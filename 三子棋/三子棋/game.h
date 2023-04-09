#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void Gamerplay(char board[ROW][COL], int row, int col);
void Complay(char board[ROW][COL], int row, int col);
char isWin(char board[ROW][COL],int row,int col);
int isFull(char board[ROW][COL],int row,int col);