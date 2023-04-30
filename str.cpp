#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	//1
	char text[256] = "Есть одно слово которое нужно заменить";
	char replace[25] = "одно";
	char newword[25] = "другое";

	while (strstr(text, replace))
	{
		char* finded = strstr(text, replace);
		char last[250] = " ";
		char* pl = last;
		strcpy(last, finded);
		pl += strlen(replace);
		strcpy(strstr(text, replace), newword);
		strcat(text, pl);
	}

	cout << text << endl;
	//2
	char Text[256] = "every\nday\ni\nsleep";
	cout << endl << Text << endl;
	int asc1 = 0; int asc2 = 0;
	for (int i = 0; i < strlen(Text); i++) {
		if (int(Text[i]) >= 97 && int(Text[i]) <= 122 && Text[i - 1] == '\n' || int(Text[0]) >= 97 && int(Text[0]) <= 122) {
			//strupr
			asc1 = int(Text[i]);
			asc2 = asc1 - 32;
			Text[i] = char(asc2);
		}
	}
	cout << endl << Text << endl;

	//3
	char alphabet[127] = "abcdefghijklmnopqrstuvwxyz";
	bool talp[26] = {};
	char Word[127] = "Slon wel po doroge";
	int count[26] = {};
	cout << endl;
	for (int i = 0; i < 26; i++) {
		talp[i] = false;
	}

	for (int i = 0; i < strlen(Word); i++) {
		for (int j = 0; j < 26; j++) {
			if (isalpha(Word[i])) {
				if (Word[i] == alphabet[j]) {
					talp[j] = true;
					count[j]++;
				}
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		if (talp[i] == true) {
			cout << alphabet[i] << " - " << count[i] << endl;
		}
	}
	//4
	char numbers[127] = "0123456789";
	bool tnum[10] = {};
	char Num[127] = "4 моркови 329г, 10 картошки 1кг, 5 яблок.";
	int count2[10] = {};
	cout << endl;

	for (int i = 0; i < 10; i++) {
		tnum[i] = false;
	}
	for (int i = 0; i < strlen(Num); i++) {
		for (int j = 0; j < 10; j++) {
			if (isdigit(Num[i])) {
				if (Num[i] == numbers[j]) {
					tnum[j] = true;
					count2[j]++;
				}
			}
		}
	}

	for (int i = 0; i < 10; i++) {
		if (tnum[i] == true) {
			cout << numbers[i] << " - " << count2[i] << endl;
		}
	}


}
