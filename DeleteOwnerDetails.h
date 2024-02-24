int del=0;         //this varible is used as counter to when you delete record then it will get increase
                    //this function is used to delete record in between the ll
void deleteOwner(){
	struct Flat *temp,*temp1,*temp2;
	int value,flag=0;
	printf("\nEnter flat no to delete Owner: ");         //this block of code excecute if the record we want to delete is other than first record
	scanf("%d",&value);
	temp=head;
	if(head==NULL){                 //it chaek if head is null means  no flats are allcated
		printf("\nFlats Are Not Allocated..!");
	}
	else if(head->flatno==value)
		    {
		      	head=head->next;
		      	free(temp);
		      	temp=NULL;
		      	flag=1;    			   
			} 		
    else
	     {
	  	     while(temp->flatno!=value && temp!=NULL)
		     {                        
		        temp1=temp;
			    temp=temp->next; 
		     }
	   	        temp1->next=temp->next;
	   	      	free(temp);
		      	temp=NULL;
		      	flag=1;
       }
	if(flag==1)
	  {      
		printf("\nDeleted Successfully..!\n");
		del++;
	  }
	else
	    {
			printf("\nFlat Number Not Found..!\n");
		}
	
//	return del;
}
