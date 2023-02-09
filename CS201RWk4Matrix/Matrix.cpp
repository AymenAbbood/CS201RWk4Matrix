#include "Matrix.h"



void fillMatrix(ifstream& inFile, int arr[3][3], int size) {
	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			inFile >> arr[r][c];
		}
	}
}

void fillMatrix(ifstream& inFile2, vector<vector<int>>& v1, int& size) {

	vector <int> tempRow;
	int temp;
	inFile2 >> size;

	for (int r = 0; r < size; r++) {
		tempRow.clear();
		for (int c = 0; c < size; c++) {
			inFile2 >> temp;
			tempRow.push_back(temp);
		}
		v1.push_back(tempRow);
	}
}


void printMatrix(int arr[3][3], int size) {
	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			cout << arr[r][c] << " ";
		}
		cout << endl;
	}
}


void printMatrix(vector<vector<int>> v1, int size) {
	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			cout << setw(5) << right << v1[r][c];
		}
		cout << endl;
	}
}

int minMatrix(vector<vector<int>> v1, int size) {
	int min = v1[0][0];
	for (int r = 0; r < size; r++) {
		for (int c = 0; c < size; c++) {
			if (v1[r][c] < min)
				min = v1[r][c];
		}
	}
	return min;
}

void addMatrix(vector<vector<int>> v1,  vector<vector<int>>& sumV1, int size) {

	vector <int> tempRow;
	int temp;
	for (int r = 0; r < size; r++) {
		tempRow.clear();
		for (int c = 0; c < size; c++) {
			temp = v1[r][c] + v1[r][c];
			tempRow.push_back(temp);
		}
		sumV1.push_back(tempRow);
	}
}

void addMatrix(vector<vector<int>> v1, vector<vector<int>> v2, vector<vector<int>>& sumV1, int size) {

	vector <int> tempRow;
	int temp;
	for (int r = 0; r < size; r++) {
		tempRow.clear();
		for (int c = 0; c < size; c++) {
			temp = v1[r][c] + v2[r][c];
			tempRow.push_back(temp);
		}
		sumV1.push_back(tempRow);
	}
}

void multMatrix(vector<vector<int>> v1, vector<vector<int>> v2, vector<vector<int>>& multV1, int size) {

	vector <int> tempRow;
	int temp;
	for (int r = 0; r < size; r++) {
		tempRow.clear();
		for (int c = 0; c < size; c++) {
			temp = 0;
			for (int k = 0; k < size; k++) {
				temp = v1[r][k] * v2[k][c];

			}
			
			tempRow.push_back(temp);
		}
		multV1.push_back(tempRow);
	}
}