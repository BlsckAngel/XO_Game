#include <stdio.h>

char table[3][3]= {{0,0},{0,0},{0,0}};
int i,j;

int init_table(){
	
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
		
			table[i][j] = '.';
	return 0;
}

int create_table() {
	 for (i=0;i<3;i++) {
		  for (j=0;j<3;j++)
			printf("%c",table[i][j]);
			printf("\n");
	}
			printf("\n");
	return 0;
}

int main () {
	init_table();
	create_table();
	return 0;
}
	
