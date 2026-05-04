
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <thread>

using namespace std;

int** initGameFromFile(string name, int& rows, int& cols, int& alive);
void  processGame(int** pArray, int rows, int cols, int& alive, int& generation);
void  printGame(int** pArray, int rows, int cols, int& alive, int& generation,
	string state);

int** createArray(int rows, int cols);
void  initArray(int** pArray, int rows, int cols, int value);
void  deleteArray(int** pArray, int rows);
bool  equalArray(int** pArray1, int** pArray2, int rows, int cols);
void  printArray(int** pArray, int rows, int cols);
void  copyArray(int** dstArray, int** srcArray, int rows, int cols);
int   oneNearInCellArray(int** pArray, int row, int col, int rows, int cols);

//------------------------------------------------------------------------------
int main()
{
	int generation = 1;
	int aliveCells = 0;

	int** array;
	int rows{ 0 }, cols{ 0 };

	array = initGameFromFile("setup.txt", rows, cols, aliveCells);

	if (!array)
		return EXIT_FAILURE;

	processGame(array, rows, cols, aliveCells, generation);

	deleteArray(array, rows);

	return EXIT_SUCCESS;
}
//------------------------------------------------------------------------------
int** initGameFromFile(string name, int& rows, int& cols, int& alive)
{
	ifstream file(name);
	alive = 0;

	if (!file)
	{
		cout << "Error of the opening file!" << endl;
		return nullptr;
	}

	file >> rows >> cols;

	if (!rows || !cols)
	{
		cout << "Error - rows or cols is zero" << endl;
		return nullptr;
	}

	int** pArray = createArray(rows, cols);

	initArray(pArray, rows, cols, 0);

	int r, c;

	while ((file >> r) && (file >> c))
	{
		pArray[r][c] = 1;
		alive++;
	}

	return pArray;
}
//------------------------------------------------------------------------------
void processGame(int** pArray, int rows, int cols, int& alive, int& generation)
{
	bool gameOver = false;
	int aliveCellsNear;

	int** tmpArray = createArray(rows, cols);

	do
	{
		// выводим текущие параметры игры
		printGame(pArray, rows, cols, alive, generation,
			"The game is in process...");

		// проходим весь массив и изменения копируем во временный массив
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				aliveCellsNear = oneNearInCellArray(pArray, i, j, rows, cols);

				if (!pArray[i][j] && aliveCellsNear == 3)
				{
					tmpArray[i][j] = 1;
					alive++;
				}
				else if (pArray[i][j] && (aliveCellsNear > 3 || aliveCellsNear < 2))
				{
					tmpArray[i][j] = 0;
					alive--;
				}
				else
					tmpArray[i][j] = pArray[i][j];
			}
		}

		if (equalArray(tmpArray, pArray, rows, cols))
		{
			// если массивы равны, то наступила стагнация
			gameOver = true;
			printGame(pArray, rows, cols, alive, generation,
				"Game over! The world has stagnated!");
		}
		else if (!alive)
		{
			// если нет живых, то конец игры
			gameOver = true;
			printGame(pArray, rows, cols, alive, generation,
				"Game over! All cells are dead!");
		}
		else
		{
			// иначе сохраняем массив и переходим к следующему поколению
			copyArray(pArray, tmpArray, rows, cols);
			generation++;
		}

	} while (!gameOver);

	deleteArray(tmpArray, rows);
}
//------------------------------------------------------------------------------
void printGame(int** pArray, int rows, int cols, int& alive, int& generation,
	string state)
{
	system("CLS");
	printArray(pArray, rows, cols);
	printf("Generation: %d Alive cells: %d\n", generation, alive);
	printf(state.c_str());
	this_thread::sleep_for(chrono::milliseconds(500));
}
//------------------------------------------------------------------------------
int oneNearInCellArray(int** pArray, int row, int col, int rows, int cols)
{
	int count = 0;
	int r_min = ((row - 1) < 0) ? 0 : row - 1;
	int r_max = ((row + 1) > (rows - 1)) ? rows - 1 : row + 1;
	int c_min = ((col - 1) < 0) ? 0 : col - 1;
	int c_max = ((col + 1) > (cols - 1)) ? cols - 1 : col + 1;

	for (int r = r_min; r <= r_max; r++)
	{
		for (int c = c_min; c <= c_max; c++)
		{
			if (row == r && col == c)
				continue;

			if (pArray[r][c])
				count++;
		}
	}

	return count;
}
//------------------------------------------------------------------------------
int** createArray(int rows, int cols)
{
	int** array{ new int* [rows] };

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}

	return array;
}
//------------------------------------------------------------------------------
void deleteArray(int** pArray, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] pArray[i];
	}

	delete[] pArray;
}
//------------------------------------------------------------------------------
bool equalArray(int** pArray1, int** pArray2, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (pArray1[i][j] != pArray2[i][j])
				return false;
		}
	}

	return true;
}
//------------------------------------------------------------------------------
void copyArray(int** dstArray, int** srcArray, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			dstArray[i][j] = srcArray[i][j];
		}
	}
}
//------------------------------------------------------------------------------
void initArray(int** pArray, int rows, int cols, int value)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			pArray[i][j] = value;
		}
	}
}
//------------------------------------------------------------------------------
void  printArray(int** pArray, int rows, int cols)
{
	char symbol = '-';

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			symbol = (pArray[i][j] == 1) ? '*' : '-';
			cout << symbol << " ";
		}
		cout << endl;
	}
}
//------------------------------------------------------------------------------
