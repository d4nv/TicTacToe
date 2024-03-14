//Dervis Emre Demir
// Group A
// TicTacToe

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

	// Defined srand for using different random numbers every time running the code.
	srand((int) time(0));
	char space[10] = { ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
	// Space array is defined for square spaces on game table. 
	int num;
	char symbol;
	char symbolpc;
	int r2;
	int winner;

	//Winning condition is defined with using 2 dimension array.
		int youwin[8][3] = {
    	{1, 2, 3}, 
   		{4, 5, 6}, 
    	{7, 8, 9}, 
    	{1, 4, 7}, 
    	{2, 5, 8}, 
    	{3, 6, 9}, 
    	{1, 5, 9}, 
    	{3, 5, 7}  
	};

	int counter;
	

	printf("--------------------------\n");
	printf("--------TIC TAC TOE-------\n");
	printf("--------------------------\n");

	//Printed the layout of the grid

	printf(" 1 | 2 | 3 \n");
	printf("_________\n");
	printf(" 4 | 5 | 6 \n");
	printf("_________\n");
	printf(" 7 | 8 | 9 \n");

	for (int i = 0; i < 5; i++)
	{

		//Asking the player which grid to play in
		printf("Please enter the square number you want to play: \n");
		scanf_s("%d", &num);

		printf("Please enter the symbol you want to play(X or O): \n");
		scanf_s(" %c", &symbol);

		char x = 'X';
		char o = 'O';


		//According to desired symbol and number if statement puts the right symbol on right square number.
		if (symbol == 'X' || symbol == 'x')
		{
			space[num] = 'X';

		}
		else if (symbol == 'O' || symbol == 'o')
		{
			space[num] = 'O';
		}


	//Loop is checking if the winning conditions are met yet
	for (counter = 0; counter < 8; counter++)
 	{
   	 if (	space[youwin[counter][0]] == 'X' &&
    	    space[youwin[counter][1]] == 'X' &&
    	    space[youwin[counter][2]] == 'X') 
		{
			printf("========\n");
       	 	printf("You won!\n");
			printf("========\n\n\n");

			//Displaying the current game table

			printf(" %c | %c | %c \n", space[1], space[2], space[3]);
			printf("_________\n");
			printf(" %c | %c | %c \n", space[4], space[5], space[6]);
			printf("_________\n");
			printf(" %c | %c | %c \n\n", space[7], space[8], space[9]);	

		// If the condition is met i = 20 to end the loop(game).
			i = 20;
        	
    	}

		else if (	space[youwin[counter][0]] == 'O' &&
    	    space[youwin[counter][1]] == 'O' &&
    	    space[youwin[counter][2]] == 'O') 
		{
			printf("========\n");
       	 	printf("You won!\n");
			printf("========\n\n\n");

			//Displaying the current game table
			printf(" %c | %c | %c \n", space[1], space[2], space[3]);
			printf("_________\n");
			printf(" %c | %c | %c \n", space[4], space[5], space[6]);
			printf("_________\n");
			printf(" %c | %c | %c \n\n", space[7], space[8], space[9]);	

			
		// If the condition is met i = 20 to end the loop(game).
			i = 20;

    	}
	}


	// If condition checks if the player won the game or not.
		if(i == 20)
		{
			break;
		}
	


	// PC picks a random number on the table to play.
		int pcnum = rand() % 9 + 1;


	// If the number that pc picked is already been played, it randoms the number until finds a empty spot.
		for(int c = 1 ; c <= 9; c++)
		{
			if(space[pcnum] == 'X' || space[pcnum] == 'O')
			{
				pcnum = rand() % 9 + 1;
			}
		}
		
	// a new random integer to make the symbol random.
		int r2 = rand() % 500;

		if(r2 % 2 == 1)
		{
			symbolpc = 'X';
		}
		else if(r2 % 2 == 0)
		{
			symbolpc = 'O';
		}

		
		if (symbolpc == 'X' || symbolpc == 'x')
		{
			space[pcnum] = 'X';

		}
		else if (symbolpc == 'O' || symbolpc == 'o')
		{
			space[pcnum] = 'O';
		}



	

	
	for (counter = 0; counter < 8; counter++)
 	{
   	 if (	space[youwin[counter][0]] == 'X' &&
    	    space[youwin[counter][1]] == 'X' &&
    	    space[youwin[counter][2]] == 'X') 
		{
			printf("========\n");
       	 	printf("PC won!\n");
			printf("========\n\n\n");

			//Displaying the current game table

			printf(" %c | %c | %c \n", space[1], space[2], space[3]);
			printf("_________\n");
			printf(" %c | %c | %c \n", space[4], space[5], space[6]);
			printf("_________\n");
			printf(" %c | %c | %c \n\n", space[7], space[8], space[9]);	


			i = 20;
    	}

		else if (	space[youwin[counter][0]] == 'O' &&
    	    space[youwin[counter][1]] == 'O' &&
    	    space[youwin[counter][2]] == 'O') 
		{
			printf("========\n");
       	 	printf("PC won!\n");
			printf("========\n\n\n");

			//Displaying the current game table

			printf(" %c | %c | %c \n", space[1], space[2], space[3]);
			printf("_________\n");
			printf(" %c | %c | %c \n", space[4], space[5], space[6]);
			printf("_________\n");
			printf(" %c | %c | %c \n\n", space[7], space[8], space[9]);	


        	i = 20;
    	}
	}

		// If condition checks if the PC won the game or not.
		if(i == 20)
		{
			break;
		}
	

	

		printf(" %c | %c | %c \n", space[1], space[2], space[3]);
		printf("_________\n");
		printf(" %c | %c | %c \n", space[4], space[5], space[6]);
		printf("_________\n");
		printf(" %c | %c | %c \n\n", space[7], space[8], space[9]);	
			
}

	

return 0;
}
