//this function is used to count the same name owners
void c_sameNameOwner(){
	int count=0;        //this counter is used to count the same name owners
	char cname[30];
	printf("\nEnter the Owner Name: ");
	scanf("%s",&cname);
	struct Flat *temp;    //temp pointer is used to trevel all the recordds
	temp=head;    
	while(temp!=NULL){             //this loop will iterate until the temp== null
		int b=strcmp(cname,temp->owner_Name)==0;           // this condition cheak the if owner name and entered name are equals 
		if(b){                                    //if equal then counter will increased 
			count++;
		}
		temp=temp->next;
	}
    printf("Total Number of Owners with name %s is %d\n",cname,count);

}
