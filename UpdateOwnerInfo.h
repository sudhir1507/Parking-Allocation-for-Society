void updateOwnerInfo(){
	int fno;
	printf("\nEnter fno to Update : ");  // enter the owner name you want to delete
	scanf("%d",&fno);
	int flag=0;
	struct Flat *temp;      // temp pointer to travel all records
	temp=head;
	while(temp!=NULL){        //this loop will iterate until the temp== null
		if(fno==temp->flatno){   // this condition cheak the if flatno and entered flat no are equals if equal then reset flag to 1 and break loop
			flag=1;
			break;
		}
		temp=temp->next;
	}
	if(flag){
		printf("Enter Owner Name :");          // this block of code update the owners info
		scanf("%s",&temp->owner_Name);
		printf("Enter birthdate in dd mm yy:");
		scanf("%d%d%d",&temp->dob.tm_mday,&temp->dob.tm_mon,&temp->dob.tm_year);
		printf("Enter Flat Owners mobile_No :");
		scanf("%s",&temp->mobile_no);
		printf("\nOwners Info Updated Successfully..!\n");
	}else{
		printf("Owner Details Not Found..!\n");
	}
}
