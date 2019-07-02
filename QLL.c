#include<stdio.h>
#include"QLL.h"

int main()
{
	int val,s,pos;
	NODE *head=NULL;

	while(1)
	{
		printf("\t====================\n");
		printf("\t Choose the Option \n");
		printf("\t====================\n");
		printf("\t  || 1. INSERT  ||\n");
		printf("\t  || 2. DELETE  ||\n");
		printf("\t  || 3. DISPLAY ||\n");
		printf("\t  || 4. CHANGE  ||\n");
		printf("\t  || 5. PEEK  ||\n");
		printf("\t  || 0.  EXIT   ||\n");
		printf("\t====================\n");
		scanf("%d",&s);
		switch(s)
		{
		    case 0:
				return 0;

			case 1:
				printf("\t\tEnter the value :_");
				scanf("%d",&val);
				head = insertlast(head,val);
				printf("\n\t\t\t\t\t Inserted value is %d \n",val);
				break;
			case 2:
				head = deletefirst(head);
				printf("\t\t\t\t\t  The Value %d is DELETED \n",val);
				break;

			case 3:
				display(head);
				break;

			case 4:
				printf("Enter the position of change value : ");
				scanf("%d",&pos);
				printf("Enter the new value : ");
				scanf("%d",&val);
				head = insertpos(head,pos,val);
				break;

			case 5: peek(head);
				break;


            default:
                    printf("\n PLEASE ENTER VALID OPTION__");
                break;
		}
	}
}
