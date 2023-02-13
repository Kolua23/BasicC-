#include<iostream>
#include<conio.h>

using namespace std;

bool gameOver;
const int Visota = 20;
const int hirina = 20;
int x, y, fruitx, fruity, score;
int tailx[100], taily[100];
int Ntail;
enum game
{
	Stop = 0, Left, ringt, up, down
};
game dir;

void Setup()
{
	gameOver = false;
	dir = Stop;
	x = Visota / 2 - 1;
	y = hirina / 2 - 1;
	fruitx = rand() % Visota;
	fruity = rand() % hirina;
	score = 0;
}

void Draw()
{
	system("cls");
	for (size_t i = 0; i < hirina + 1; i++)
		cout << "#";
	cout << endl;
	for (size_t i = 0; i < Visota; i++)
	{
		for (int j = 0; j < hirina; j++)
		{
			if (j == 0 || j == hirina - 1)
				cout << "#";
			if (i == y && j == x)
				cout << "0";
			else if (i == fruity && j == fruitx)
				cout << "F";
			else {
				bool print = false;
				for (int k = 0; k < Ntail; k++) {
					if (tailx[k] == j && taily[k] == i) {
						print = true;
						cout << "o";
					}
				}
				if (!print)

					cout << " ";
			}
		}

		cout << endl;
	}
	for (size_t i = 0; i < hirina + 1; i++)
		cout << "#";
	cout << endl;
	cout << "score" << score << endl;


}
void imput()
{
	if (_kbhit()) {
		switch (_getch())
		{
		case 'a':
			dir = Left;
			break;
		case 'd':
			dir = ringt;
			break;
		case 'w':
			dir = up;
			break;
		case 's':
			dir = down;
			break;
		case 'x':
			gameOver = true;
			break;
		}
	}
}
void Logic()
{
	int prewX = tailx[0];
	int prewY = taily[0];
	int prev2X, prev2Y;
	tailx[0] = x;
	taily[0] = y;
	for (int i = 1; i < Ntail; i++)
	{
		prev2X = tailx[i];
		prev2Y = tailx[i];
		tailx[i] = prewX;
		tailx[i] = prewY;
		prewX = prev2X;
		prewY = prev2Y;
	}
	switch (dir)
	{
	case Left:
		x--;
		break;
	case ringt:
		x++;
		break;
	case up:
		y--;
		break;
	case down:
		y++;
		break;

	}
	if (x > hirina || x<0 || y>Visota || y < 0)

		gameOver = true;

	if (x == fruitx && y == fruity)
	{
		score += 1;
		fruitx = rand() % Visota;
		fruity = rand() % hirina;
		Ntail++;
	}
}
int main()
{
	Setup();
	while (!gameOver)
	{
		Draw();
		imput();
		Logic();

	}

	return 0;
}