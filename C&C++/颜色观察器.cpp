#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

void yanse(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
int main(){
	int i=0;
	while(i<=8190){
		yanse(i);
		printf("%d==============\n",i);
		i++;
	}

	return 0;
}
