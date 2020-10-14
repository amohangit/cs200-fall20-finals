/* add honor code statement here */
#include <stdio.h>
#include <math.h>
void forward(int rows){
	int cols = ceil(log2(rows));
	for (int i = 0; i < rows; i++){
		for (int j = cols - 1; j >= 0; j--){
			printf("%d", (i / (int)pow(2,j)) % 2);
		}
		printf("\n");
	}
}
void backward(int rows){
	/* add code here to print backward */
	
}
int main(){
	int prompt = 0;
	while(1){
		printf("Please enter the number of rows, (0) for exit:");
		scanf("%d", &prompt);
		getchar();
		if (prompt > 0){
			char direction = 'F';
			printf("Please type F (Upper Case) to print forward, \n\t and type B (Upper Case) to print backward:");
			scanf("%c", &direction);
			getchar();
			if (direction == 'F')
				forward(prompt);
			else
				backward(prompt);
		}
		else {
			break;
		}
	}
	return 0;
}
