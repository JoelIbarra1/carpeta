#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<time.h>
#include<windows.h>
int main()
{
int temp1;
}
struct medical
{
	int id;
	char medi_name[20];
	int rack;
	char cabnit[2];
	int quantity;
	float sale;
	float total;
	float unit;
	float cost;
	float profit;
	float bye;
	int qty;
	char pur_date[15];
	char exp_date[15];
	char manu_date[15];
	int bill_no;
	char comp_name[20];
	char supp_name[30];
 };

struct medical temp;
FILE *ptr;

char a[10];
struct Proveedor
{
	int supp_id;
	char supp_name[25];
	char city[20];
	char mob_no[11];
	char email[30];

};
struct Proveedor temp1;

struct Clientes
{
	int cust_id;
	char cust_name[30];
	char city[20];
	char mob_no[11];
	char email[50];

};
struct Clientes temp_cli;
FILE *ptr1;

struct Factura
{
	int billno;
	char cname[30];
	char mediname[30];
	int medi_qty;
	float medi_rate;
	float total;

};
struct Factura temp_Fac;
FILE *ptrbill;

void sup_update() {

  	char Index;
  	int sid;
  	FILE *datos;

  	system("cls");
  	box();

	   datos= fopen("datos.txt","rb+");
	   if(datos==NULL )
	   {
		printf("\n\t Error, no se puede abrir este archivo ");
		exit(0);
	   }

	   lbox();
	   gotoxy(30,8);
	   printf(" Modificando Proveeedor ");

	   gotoxy(12,13);
	   printf("Introduzcca el numero de cedula   ");
	   scanf("%d",&sid);

	    gotoxy(12,15);
		datos= fopen("Temp.dat","w");
		if(datos==NULL)
		{
			printf("Este archivo no se puede abrir");
			exit(1);
		}
		else
		{
			while(fscanf(datos,"%d %s %s %s %s",&temp1.supp_id,temp1.supp_name,temp1.mob_no, temp1.city,temp1.email)!=EOF)
			{
				if(temp1.supp_id==sid)
				{
					gotoxy(18,17);
					printf(" usuario encontrado   ");

					gotoxy(10,19);
					printf("%d\t %s \t%s \t%s \t%s",temp1.supp_id,temp1.supp_name,temp1.mob_no, temp1.city,temp1.email);

					gotoxy(12,22);
					printf("introduzca el nombre   : ");
					gets(temp1.supp_name);

					gotoxy(12,24);
					printf("Introduzca el numero de telefono  : ");
					gets(temp1.mob_no);

					gotoxy(12,26);
					printf("Introduzca la fecha de nacimiento        : ");
					gets(temp1.city);

					gotoxy(12,28);
					printf("Introduzca la ciudad de nacimiento       : ");
					gets(temp1.email);

					gotoxy(20,32);
					printf("[S] Actualizar");


					gotoxy(18,36);
					printf("Presione una letra para ejecutar la operacion: ");
					Index= getch();

					switch (Index)
					{
					case 's':
						fprintf(datos,"%d %s %s %s %s\n",temp1.supp_id,temp1.supp_name,temp1.mob_no,temp1.city,temp1.email);

						system("cls");
					    gotoxy(20,25);
					    printf("usuario actualizado con exito...");
						Index= getche();
						break;
					
					default:
					}		
				}
			else
			{
				fprintf(datos,"%d %s %s %s %s\n",temp1.supp_id,temp1.supp_name,temp1.mob_no,temp1.city,temp1.email);
				fflush(stdin);
			}
		}
	   	fclose(datos);
	   }

}
