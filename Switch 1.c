#include<stdio.h>
#include<stdlib.h>
int main()

{
 char calificacion;
 printf("Introduzca su nota")
calificacion=getchar();
switch (calificacion)
{
	case'a':
	case'A':
	puts("La nota es Excelente");
	break;
	case'b':
	case'B':
	puts("La nota es Buena");
	break;
	case'c':
	case'C':
	puts("La nota es Regular");
	break;
	case'd':
	case'D':
	puts("La nota es Suficiente");
	break;
	case'f':
	case'F':
	puts("La nota es No Suficiente");
	break;
	default:
	puts("Error")
}
system("pause");