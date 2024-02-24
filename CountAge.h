void countAge(){
	int age,dd,mm,yy,flag=0;;
	struct Flat *temp;
	time_t t;
    t = time(NULL);
    struct tm dobc=*localtime(&t);  //printf("Current Date: %d-%d-%d", tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
	dobc.tm_mon+=1;
	dobc.tm_year+=1900; 
	temp=head;
	printf("\nEnter the Owner Birth date to calculate age in dd mm yy form: ");
	scanf("%d%d%d",&dd,&mm,&yy);
	while(temp!=NULL){
		if((dd==temp->dob.tm_mday)&&(mm==temp->dob.tm_mon)&&(yy==temp->dob.tm_year)){                 
		       age=dobc.tm_year-temp->dob.tm_year;  
		       flag=1;
			   break;         
		}
		temp=temp->next;
	}
	if(flag){
		printf("\nAge is : %d\n",age);
	}else{
		printf("Entered birth date not matched with any owner..!\n");
	}
}
