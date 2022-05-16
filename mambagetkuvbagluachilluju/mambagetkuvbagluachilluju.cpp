#include <stdio.h>
#include <string.h>

unsigned int delka(char* x) {
	unsigned int i = 0;
	while (*(x + i) != '\0') i++;
	return i;
}

int porovnej(char* x, char* y) {
	unsigned long long delsi;						//pro 64 bitovou platformu
	//1. varianta jak porovnat
		//int delsi = strlen(x);
		//int kratsi = strlen(y);
	//v promene delsi bude delka delsiho retezce
		//if (kratsi > delsi) delsi = kratsi;
	//2. Varianta jak porovnat
	if (delka(x) > delka(y)) {
		delsi = delka(x);
	}
	else {
		delsi = delka(y);
	}
	for (unsigned long long i = 0; i <= delsi; i++) {
		//jsou-li řetězce shodné, končíme 
		if (*(x + i) != *(y + i)) return 1;
	}

	return 0;
}

int main()
{
	char prvni[] = "babkama";
	printf("delka: %d\n", delka(prvni));
	char druhy[] = "babkama";
	if (porovnej(prvni, druhy) == 0) {
		printf("Retezce su si rovny.\n");
	} else {
		printf("Retezce nesu si rovnyyy. \n");
	}
}