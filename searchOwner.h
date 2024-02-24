void checkOwnerName(){                  // search owners details by his name
	int flag=1;
	char name[20];
	printf("\nEnter the name: ");
	scanf("%s",&name);
	struct Flat *temp;         // creating temp variable to travel the ll
	temp=head;
	printf("\nFlat_No\t\tOwner_name\tOwner_Birthdate\t\tMobile_Number\tParking_number\n");
	while(temp!=NULL){
		int a=strcmp(name,temp->owner_Name)==0;        // compareing entered name and onwer name 
		if(a){
			flag=0;           
	     	printf("%d\t\t%s\t\t%d/%d/%d\t\t\t%s\t\t%d\n",temp->flatno,temp->owner_Name,temp->dob.tm_mday,temp->dob.tm_mon,temp->dob.tm_year,temp->mobile_no,temp->pno);

		}
		temp=temp->next;
	}
	if(flag){
	    printf("Owner Not Found\n");
	}
}
