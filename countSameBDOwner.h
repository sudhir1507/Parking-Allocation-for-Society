//this function is used to count the no of owners with the same date of birth
void c_sameBDOwner(){
	int bcount=0;     //this is counter to count no of owerns with same dob       
	int dd,mm,yy;
	printf("\nEnter the Owner Birth date dd mm yy form: ");
	scanf("%d%d%d",&dd,&mm,&yy);
	struct Flat *temp;         // temp pointer to travel all records
	temp=head;
	while(temp!=NULL){              //this loop will iterate until the temp== null 
		if((dd==temp->dob.tm_mday)&&(mm==temp->dob.tm_mon)&&(yy==temp->dob.tm_year)){                         //this block will cheak is enterd dob and owner dob is same or not
			bcount++;                  // if same then counter will fet increamnet
		}
		temp=temp->next;
	}
	printf("Total Number of Owners with Birth Date %d/%d/%d is %d\n",dd,mm,yy,bcount);
}
