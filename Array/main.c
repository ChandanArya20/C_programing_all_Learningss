#include"array.h"
int main()
{
	ArrayType array;
	int choice, created; 
	DataType data;
	while(1)
	{
		choice=mainMenu();
		switch(choice)
		{
			case 1:	system("cls");
					if(!created)
					{
						array= createArray();
						printf(" Array is created successfully");
						created=1;
					}
					else
						printf(" Array is already created");
					break;
			case 2: system("cls");
					int flag=1;
					while(flag)
					{
						choice = insertMenu();
						switch(choice)
						{
							case 1 : system("cls");
									 if(created)
									 {
									 	if(isFull(&array)!=1)
									 	{
									 		data = readData();
									 		insertAtEnd(&array, data);
									 		printf(" Data inserted successfully");									
									 		
										}
										else
											printf(" Array is full");
									 }
									 else
									 	printf(" Array is not created\n Go main menu and create array first");
									 
									 break;
										 
								case 2 : system("cls");
										 if(created)
										 {
										 	if(isFull(&array)!=1)
										 	{
										 		data= readData();
										 		insertAtBig(&array, data);
										 		printf(" Data inserted successfully");									
										 		
											}
											else
												printf(" Array is full");
										 }
										 else
										 	printf(" Array is not created\n Go main menu and create array first");
										 	
										 break;
								case 3 : system("cls");
										 if(created)
										 {
										 	if(isFull(&array)!=1)
										 	{
										 		data= readData();
										 		int loc;
										 		printf(" Enter location where you want to store : ");
										 		scanf("%d",&loc);
										 		insertAtDesiredLoc(&array, data, loc);
										 		printf(" Data inserted successfully");											
											}
											else
												printf(" Array is full");
										 }
										 else
										 	printf(" Array is not created\n Go main menu and create array first");
										 	
										 break;
								case 4 : system("cls");
										 printf("This feature is coming soon...");
										 break;
								case 5 : system("cls");
										 printf("This feature is coming soon...");
										 break;
									
							  	case 6 : system("cls");
									   	 flag=0;
							  			 break;
								case 0 : Exit();
										
							   default : system("cls");
							             printf(" Invalid choice");
							}
						}
					break;
			case 3: system("cls");
					if(created)
					{
						if(array.length!=0)
						{
							printData(&array);
						}
						else
							printf(" Data is not available");
					}
					else
						printf(" Array is not created");
					
					break;
			case 4: system("cls");
					printf("This feature is coming soon...");
					break;
			case 5: system("cls");
					printf("This feature is coming soon...");
					break;
			case 6: system("cls");
					printf("This feature is coming soon...");
					break;
			case 0: Exit();
			
			case 7: system("cls");
					printf("This feature is coming soon...");
					break;
			case 8: system("cls");
					printf("This feature is coming soon...");
					break;
		  default : system("cls");
		  			printf(" Invalid Choice");
		}
	
	}
	
	
	return 0;
}
