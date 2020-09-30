#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int input1, input2, input3, out, total;
	char nama[100];
	out = 0;
	do{
		system("cls");
		printf("Siapa nama anda?\n");
		scanf("%s", &nama);
		
		do{
			printf("Halo, %s! Apa yang anda inginkan saat ini?\n", nama);
			printf("1. Makanan Pembuka\n");
			printf("2. Makanan Berat\n");
			printf("3. Makanan Penutup\n");
			printf("4. Minuman\n");
			printf(">>");
			scanf("%d", &input1);
		}while(input1 < 1 || input1 > 4);
		
		do{
			printf("Bila diminta memilih, anda sedang menginginkan makanan seperti apa?\n");
			printf("1. Makanan Sehat\n");
			printf("2. Biasa Saja\n");
			printf(">>");
			scanf("%d", &input2);
		}while(input2 < 1 || input2 > 2);
		
		do{
			printf("Bagaimana pertimbangan anda terhadap harganya?\n");
			printf("1. Yang Murah Saja\n");
			printf("2. Bukan Masalah\n");
			printf(">>");
			scanf("%d", &input3);
		}while(input3 < 1 || input3 > 2);
		if(input1 == 1 && input2 == 1 & input3 == 1){
			printf("Here is our suggestion, Gado-Gado\n");
		}
		else if(input1 == 1 && input2 == 1 & input3 == 2){
			printf("Here is our suggestion, Salad\n");
		}
		else if(input1 == 1 && input2 == 2 & input3 == 1){
			printf("Here is our suggestion, Soup\n");
		}
		else if(input1 == 1 && input2 == 2 & input3 == 2){
			printf("Here is our suggestion, French Fries\n");
		}
		
		else if(input1 == 2 && input2 == 1 & input3 == 1){
			printf("Here is our suggestion, Pempek\n");
		}
		else if(input1 == 2 && input2 == 1 & input3 == 2){
			printf("Here is our suggestion, Baked Chicken Parmesan\n");
		}
		else if(input1 == 2 && input2 == 2 & input3 == 1){
			printf("Here is our suggestion, Fried Rice\n");
		}
		else if(input1 == 2 && input2 == 2 & input3 == 2){
			printf("Here is our suggestion, Fried Chicken\n");
		}
		
		else if(input1 == 3 && input2 == 1 & input3 == 1){
			printf("Here is our suggestion, Dark Chocolate\n");
		}
		else if(input1 == 3 && input2 == 1 & input3 == 2){
			printf("Here is our suggestion, Greek Yoghurt\n");
		}
		else if(input1 == 3 && input2 == 2 & input3 == 1){
			printf("Here is our suggestion, Traditional Cake\n");
		}
		else if(input1 == 3 && input2 == 2 & input3 == 2){
			printf("Here is our suggestion, Pudding\n");
		}
		
		else if(input1 == 4 && input2 == 1 & input3 == 1){
			printf("Here is our suggestion, Mineral Water\n");
		}
		else if(input1 == 4 && input2 == 1 & input3 == 2){
			printf("Here is our suggestion, Mango Juice\n");
		}
		else if(input1 == 4 && input2 == 2 & input3 == 1){
			printf("Here is our suggestion, Soda\n");
		}
		else if(input1 == 4 && input2 == 2 & input3 == 2){
			printf("Here is our suggestion, Frappucino\n");
		}
		
		printf("Press Enter to continue\n");
		getch();
	 	printf("\n");
	 	printf("Play again?\n");
	 	printf("(1/YES)(2/NO)\n");
	 	scanf("%d",&out);
	 	
	}while(out!=2);
}
