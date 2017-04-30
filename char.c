/********************************************************************************
**
**Program c & pointer 1.1
**
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define	MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers( int columns[], int max );
void rearrange( char *output, char const *input, 
     int n_columns, int const columns[] );


int  main()
{
	int n_columns;
	int colums(MAX_COLS);
	char input(MAX_INPUT);
	char output(MAX_INPUT);

	whilc( gets( input ) != NULL ) {
		printf( "

