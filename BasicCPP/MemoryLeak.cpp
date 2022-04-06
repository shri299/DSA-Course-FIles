// "Simple Betting game”

// "Jack Queen King" - computer shuffles these cards
// player has to guess the position of queen.

// if he wins, he takes 3*bet

// if he looses, he looses the bet amount.

// player has $100 initially
//#include<iostream>
//
//using namespace std;
//
//int cash = 100;
//
//void play(int bet)
//{
//	//char c[] = { 'J','Q','K' };
//	char* c = new char[3];
//	c[0] = 'J';
//	c[1] = 'Q';
//	c[2] = 'K';
//	cout << "shuffling..." << endl;
//
//	srand(time(NULL));
//
//	for (int i = 0; i < 5; i++)
//	{
//
//		int x = rand() % 3;
//		int y = rand() % 3;
//
//		int temp = c[x];
//		c[x] = c[y];
//		c[y] = temp;
//
//	}
//
//	int playersGuess;
//	cout << "Guess the position of queen 1, 2 or 3" << endl;
//
//	cin >> playersGuess;
//
//	if (c[playersGuess-1]=='Q')
//	{
//		cash = cash + 3 * bet;
//
//		cout << "you won" << endl;
//	}
//	else
//	{
//		cash = cash - bet;
//
//		cout << "you won" << endl;
//	}
//
//	free(c);
//
//
//}
//int main()
//{
//	int bet;
//
//	while (cash>0)
//	{
//		cout << "Total cash" << cash << endl;
//		cout << "enter your bet amount" << endl;
//		cin >> bet;
//		if (bet>cash||bet==0)
//		{
//			break;
//		}
//		play(bet);
//	}
//}