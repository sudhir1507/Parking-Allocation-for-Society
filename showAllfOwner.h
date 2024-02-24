//this function will show all the records
void showAllfOwner(){
	struct Flat *temp;      //temp pointer which is used to trrevel the all records
	temp=head;
	printf("\nFlat_No\t\tOwner_name\tOwner_Birthdate\t\tMobile_Number\tParking_number\n");
	while(temp!=NULL){
		printf("%d\t\t%s\t\t%d/%d/%d\t\t\t%s\t\t%d\n",temp->flatno,temp->owner_Name,temp->dob.tm_mday,temp->dob.tm_mon,temp->dob.tm_year,temp->mobile_no,temp->pno);
		temp=temp->next;
	}
}

