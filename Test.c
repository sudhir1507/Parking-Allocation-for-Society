#include<time.h>
#include<stdio.h>
#include<stdlib.h>              // including all header files
#include<string.h>
#include "Flat.h" 
#include "DeleteOwnerDetails.h"
#include "addflats.h"
#include "allocateParking.h"
#include "flatallocate.h"
#include "CheckOpenParking.h"
#include "checkavailableflat.h"
#include "countSameNameOwnesr.h"
#include "countSameBDOwner.h"
#include "CountAge.h"
#include "showAllfOwner.h"
#include "searchOwner.h"
#include "UpdateOwnerInfo.h"
//int *ptr=NULL;
int no;
int main(){
	int choice;
	char ch;
	do{
	printf("1.Add Number of flat in society\n");
	printf("2.Allocate parking for society .\n");
	printf("3.allocate flat to owner \n");
	printf("4.Check flat available or not .\n");
	printf("5.view all owner .\n");
//	printf("6.allocate parking to flat owner \n");
	printf("6.check open parking \n");
	printf("7.search owner by name or flat no .\n");
	printf("8.delete owner by flat no .\n");
	printf("9.update owner info by flat no.\n");
	printf("10.count same name owner .\n");
	printf("11.count same birth date of owner \n");
	printf("12.count the age of owner by using birth date .\n");
	printf("\nEnter the choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
              addflats();             // to allocate no of flats
			  break;
		case 2:
			allocateParking();           // to allocate no of parking
			break;
		case 3:
			flatallocate();           //alloacting detils of owners
			break;
		case 4:
			checkavbleflat();        // cheak  available flat
			break;
		case 5: 
			showAllfOwner();         // show all owners
			break;
		case 6:
			checkOpenp();             // cheak  available open parking
			break;
		case 7:
			checkOwnerName();           // search owners name
			break;
		case 8:
			deleteOwner();            //delete owner by flatno
			break;
		case 9:
			updateOwnerInfo();          //update owners info
			break;
		case 10:
			c_sameNameOwner();            //count no of owners with the same name
			break;
		case 11:
			c_sameBDOwner();             //count no of owners with the same birth date
			break;
		case 12:
			countAge();
			break;
		default:
			printf("Worng choice\n");
	}
	printf("Do you want to continue? press 'y' or 'Y' :");
	_flushall();
    scanf("%c",&ch);
}while(ch=='Y'||ch=='y');

return 0;
}
