
struct Flat{                      //strcuture owners details
	int flatno;
	int pno;
	char owner_Name[30];
	struct tm dob;
	char mobile_no[10];
	struct Flat *next;
};
struct Flat *head=NULL;


