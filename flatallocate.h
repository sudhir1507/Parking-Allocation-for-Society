int flat=0,parking,n=1;
void flatallocate(){
	struct Flat *temp,*temp1;
	temp=(struct Flat*)malloc(sizeof(struct Flat));
		if((n-del)<=ftotal){
			temp->flatno=flat+1;
		    temp->pno=parking+1;
			printf("Enter Owner Name :");
			scanf("%s",&temp->owner_Name);
	    	printf("Enter birthdate in dd mm yy:");
	    	//tm1.tm_mday, tm1.tm_mon, tm1.tm_year);
			scanf("%d%d%d",&temp->dob.tm_mday,&temp->dob.tm_mon,&temp->dob.tm_year);
			printf("Enter Flat Owners mobile_No :");
			scanf("%s",&temp->mobile_no);
			temp->next=NULL;
			if(head==NULL){
		    head=temp;
		
	        }else{
		        temp1=head;
		        while(temp1->next!=NULL){
			           temp1=temp1->next;
	         	}
		        temp1->next=temp;
		
	       }
	    flat++;
		parking++;
	    n++;
	
	  }else{
		printf("All flats are Allocated..!\n");
	}
}
