#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));

	char answers[10][30] = {
		"It is certain",
		"Without a doubt",
		"Yes, definitely",
		"As I see it, yes",
		"Most likely",
		"Yes",
		"My reply is no",
		"My sources say no",
		"Very doubtful",
		"Maybe"
	};

	int randNum = rand() % (10 + 1);

	printf("%s\n", answers[randNum]);
	return 0;
}
