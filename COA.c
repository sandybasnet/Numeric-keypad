#include<stdio.h>
int main(){
	int n,num;
	char ch;
	
do{

		printf("Enter any number available in the nokia phone: \n");
	scanf("%d",&num);
		switch(num){
			case 1:
				printf("{} ");
				break;
				case 2:
				printf("A");
				break;
				case 22:
				printf("B");
				break;
			case 222:
				printf("C");
				break;
				case 2222:
				printf("2");
				break;
			case 3:
				printf("D");
				break;
				case 33:
				printf("E");
				break;
				case 333:
				printf("F");
				break;
				case 3333:
				printf("3");
				break;
				case 4:
				printf("G");
				break;
				case 44:
				printf("H");
				break;
				case 444:
				printf("I");
				break;
				case 4444:
				printf("4");
				break;
				case 5:
				printf("J");
				break;
				case 55:
				printf("K");
				break;
				case 555:
				printf("L");
				break;
				case 5555:
				printf("5");
				break;
				case 6:
				printf("M");
				break;
				case 66:
				printf("N");
				break;
				case 666:
				printf("O");
				break;
				case 6666:
				printf("6");
				break;
				case 7:
				printf("P");
				break;
				case 77:
				printf("Q");
				break;
				case 777:
				printf("R");
				break;
				case 7777:
				printf("S");
				break;
				case 77777:
				printf("7");
				break;
				case 8:
				printf("T");
				break;
				case 88:
				printf("U");
				break;
				case 888:
				printf("V");
				break;
				case 8888:
				printf("8");
				break;
				case 9:
				printf("W");
				break;
				case 99:
				printf("X");
				break;
				case 999:
				printf("Y");
				break;
				case 9999:
				printf("Z");
				break;
				case 99999:
				printf("9");
				break;
				case 0:
				printf(" ");
				break;
				default:
					printf("The number that you entered is not listed in our phone.");
		}
		
		
		
 	printf("\n");
	  printf("Do you want to continue? (y/n): \n");
        scanf("%c",&ch);
				
	
    }while(ch = 'y');


    printf("\n");
	
			
		
		

	return 0;
}
