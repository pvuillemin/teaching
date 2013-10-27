#include <iostream.h>
#include <stdlib.h>


int main()
{
	bool inGame = true;

	while (inGame)
	{
		unsigned int numberToGuess = rand() % 50;
		unsigned int answer = -1;
		unsigned int answerCount = 0;

		while (answer != numberToGuess)
		{
			cout << " Give a guess :";
			cin >> answer;
			
			if (answer > numberToGuess)
				cout << "Too much " << endl;
			else if (answer < numberToGuess)
				cout << "Too few " << endl;
			
			answerCount++;
		}
		cout << "Won using " << answerCount << " attempts" << endl;

		char playAgain = 0; 
		
		while (playAgain!='Y' && playAgain!='N')
		{
			cout << "Play again (Y/N) ? " ;
			cin >>playAgain;
			switch (playAgain)
			{
				case 'N':
					inGame = false;	
					break;
				case 'O':
					inGame = true;
					break;
				default :
					cout << "Answer per Y or N" ;
					cout << endl;
			}									}
				
	}		
	return 0;
}
