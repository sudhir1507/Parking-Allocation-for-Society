#include<stdio.h>
int main(){
	
	int choice,size,i,j,count=0,no;
	char name[30],ch;
	do{
	
	printf("1.Add Number of flat in society\n");
	printf("2.allocate flat to owner \n");
	printf("3.Check flat available or not .\n");
	printf("4.Allocate parking for society .\n");
	printf("5.allocate partaking to float owner \n");
	printf("6.check open parking \n");
	printf("7.search own by name or float no .\n");
	printf("8.view all owner .\n");
	printf("9.delete owner by flat no .\n");
	printf("10.update owner info by flat no.\n");
	printf("11.count same name owner .\n");
	printf("12.count same birth date of owner \n");
	printf("13.count the age of owner by using birth date .\n");
	printf("Enter the choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
              addBook();
			  break;
		case 2:
			displaybookinfo();
			break;
		case 3:
			printf("Author name: ");
			scanf("%s",&name);
			listallbooks(name);
			break;
		case 4:
			printf("Enter the id:");
			scanf("%d",&no);
			specifiedbook(no);
			break;
		case 5:
			countbooks();
			break;
		case 6:
			idOrder();
			break;
		case 7:
			exit(0);
			break;
		default:
			printf("Worng choice");
	}
	printf("Do you want to continue:");
	_flushall();
    scanf("%c",&ch);
}while(ch=='Y'||ch=='y');

return 0;
}
