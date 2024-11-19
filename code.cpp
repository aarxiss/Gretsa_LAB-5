#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "uk_UA");
	int rows, cols;
	cout << "Введіть кількість рядків і стовпців матриць:";
	cin >> rows >> cols;
	int matrix1[2][2];
	int matrix2[2][2];
	int result[2][2];
	cout << "Введіть елементи першої матриці:" << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> matrix1[i][j];
		}
	}
	cout << "Введіть елементи другої матриці:" << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cin >> matrix2[i][j];
		}
	}
	cout << "Результат додавання матриць: " << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	cout << "Результат: " << endl;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
	return 0;

}

