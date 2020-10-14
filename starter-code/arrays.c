/* add honor code statement here */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void scheme1(int rs, int cs){
	int* array = (int*) malloc(rs * cs * sizeof(int));
	for (int i = 0; i < rs; i++){
		for (int j = 0; j < cs; j++){
			*(array + (i*cs) + j) = (i*cs) + j + 1;
		}
	}
	for (int i = 0; i < rs; i++){
		for (int j = 0; j < cs; j++){
			printf("%d\t", array[i*cs + j]);
		}
		printf("\n");
	}
}
void scheme2(int rs, int cs){
	/* add your code here */
	
}
int main(){
	int rs = 0, cs = 0;
	while(1){
		printf("Please enter the number of rows, (0) for exit:");
		scanf("%d", &rs);
		getchar();
		if (rs > 0){
			printf("Please enter the number of cols:");
			scanf("%d", &cs);
			getchar();
			int scheme = 1;
			printf("Please enter the scheme number:");
			scanf("%d", &scheme);
			getchar();
			if (scheme == 1)
				scheme1(rs, cs);
			else
				scheme2(rs, cs);
		}
		else {
			break;
		}
	}
	return 0;
}