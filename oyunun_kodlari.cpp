#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int k=0, l=0,i,j,sayi,a;
char kutu[9][9] = {
					{'5','X','X','X','1','X','X','X','4'},
					{'2','7','4','X','X','X','6','X','X'},
					{'X','8','X','9','X','4','X','X','X'},
					{'8','1','X','4','6','X','3','X','2'},
					{'X','X','2','X','3','X','1','X','X'},
					{'7','X','6','X','9','1','X','5','8'},
					{'X','X','X','5','X','3','X','1','X'},
					{'X','X','5','X','X','X','9','2','7'},
					{'1','X','X','X','2','X','X','X','3'},
};

void tahta();
void yon(char);
int kazandimi();

int main()
{
	setlocale(LC_ALL, "Turkish");
	char b;
	int durum = 1;
	while (durum) {
		Sleep(10);
		tahta();
		cout << "\t      Yukarı(W)" << endl;
		cout << "     Sol(A) / Aşağı(S) / Sağ(D)";
		b=_getch();
		yon(b);
		durum=kazandimi();
	}
	system("cls");
	tahta();
	cout << "\n\t     KAZANDIN"<<endl;
	return 0;
}

void yon(char a) {
	switch (a) {
		//YUKARI
	case 'w':
		k--;
		if (k < 0) { k = 8; }
		break;
		//AŞAĞI
	case 's':
		k++;
		if (k > 8) { k = 0; }
		break;
		//SOL
	case 'a':
		l--;
		if (l < 0) { l = 8; }
		break;
		//SAĞ
	case 'd':
		l++;
		if (l > 8) { l = 0; }
		break;
		// 1.durum
	case 49:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '1';
		break;
		// 2.durum
	case 50:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '2';
		break;
		// 3.durum
	case 51:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '3';
		break;
		// 4.durum
	case 52:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '4';
		break;
		// 5.durum
	case 53:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '5';
		break;
		// 6.durum
	case 54:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '6';
		break;
		// 7.durum
	case 55:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '7';
		break;
		// 8.durum
	case 56:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '8';
		break;
		// 9.durum
	case 57:
		if (kutu[k][l] == 'X')
			kutu[k][l] = '9';
		break;
		// 0.durum
	case 48:
		if (!(kutu[k][l] == 'X'))
			kutu[k][l] = 'X';
		break;


	default:
		break;
	}
}


int kazandimi() {
	if(kutu[0][0] == '5' && kutu[0][1] == '9' && kutu[0][2] == '3' && kutu[0][3] == '6' && kutu[0][4] == '1' && kutu[0][5] == '2' && kutu[0][6] == '7' && kutu[0][7] == '8' && kutu[0][8] == '4' &&
	   kutu[1][0] == '2' && kutu[1][1] == '7' && kutu[1][2] == '4' && kutu[1][3] == '3' && kutu[1][4] == '5' && kutu[1][5] == '8' && kutu[1][6] == '6' && kutu[1][7] == '9' && kutu[1][8] == '1' &&
	   kutu[2][0] == '6' && kutu[2][1] == '8' && kutu[2][2] == '1' && kutu[2][3] == '9' && kutu[2][4] == '7' && kutu[2][5] == '4' && kutu[2][6] == '2' && kutu[2][7] == '3' && kutu[2][8] == '5' && 
	   kutu[3][0] == '8' && kutu[3][1] == '1' && kutu[3][2] == '9' && kutu[3][3] == '4' && kutu[3][4] == '6' && kutu[3][5] == '5' && kutu[3][6] == '3' && kutu[3][7] == '7' && kutu[3][8] == '2' && 
	   kutu[4][0] == '4' && kutu[4][1] == '5' && kutu[4][2] == '2' && kutu[4][3] == '8' && kutu[4][4] == '3' && kutu[4][5] == '7' && kutu[4][6] == '1' && kutu[4][7] == '6' && kutu[4][8] == '9' && 
	   kutu[5][0] == '7' && kutu[5][1] == '3' && kutu[5][2] == '6' && kutu[5][3] == '2' && kutu[5][4] == '9' && kutu[5][5] == '1' && kutu[5][6] == '4' && kutu[5][7] == '5' && kutu[5][8] == '8' && 
	   kutu[6][0] == '9' && kutu[6][1] == '2' && kutu[6][2] == '7' && kutu[6][3] == '5' && kutu[6][4] == '4' && kutu[6][5] == '3' && kutu[6][6] == '8' && kutu[6][7] == '1' && kutu[6][8] == '6' && 
	   kutu[7][0] == '3' && kutu[7][1] == '4' && kutu[7][2] == '5' && kutu[7][3] == '1' && kutu[7][4] == '8' && kutu[7][5] == '6' && kutu[7][6] == '9' && kutu[7][7] == '2' && kutu[7][8] == '7' && 
	   kutu[8][0] == '1' && kutu[8][1] == '6' && kutu[8][2] == '8' && kutu[8][3] == '7' && kutu[8][4] == '2' && kutu[8][5] == '9' && kutu[8][6] == '5' && kutu[8][7] == '4' && kutu[8][8] == '3')
	{
		return 0;
	}
	else {
		return 1;
	}
}

void tahta() {
	system("cls");

	for (i = 1; i <= 9; i++) {
		cout << "\t";
		for (j = 1; j <= 9; j++) {
			if ((i - 1) == k && (j - 1) == l) {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
				cout << kutu[(i - 1)][(j - 1)];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << " ";
			}
			else if (kutu[(i - 1)][(j - 1)] == 'X') {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
				cout << kutu[(i - 1)][(j - 1)];
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout << " ";
			}
			else if (!((i - 1) == k && (j - 1) == l)) {
				cout << kutu[(i - 1)][(j - 1)] << " ";
			}
			if (j != 9) {
				if (j % 3 == 0) {
					cout << "|";
				}
			}

		} 
		if (i != 9) {
			if (i % 3 == 0) {
				cout << "\n\t-------------------\n";
			}
			else {
				cout << endl;
			}
		}
	}
	cout << endl;
}
