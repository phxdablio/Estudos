//Programa para ver desempeenho a materia de acordo com classifica��o

 #include <stdio.h>

 int main (void){
 	
     char a;
	 printf ("DIGITE SUA CLASSIFICAcAO\n");
 	 scanf ("%c",&a);
 	 getchar();
 	
 	switch (a){
 		
 		case 'A' : printf ("EXELENTE"); break;
 		case 'a' : printf ("EXELENTE"); break;
 		
		 case 'B' : printf ("OTIMO"); break;
		 case 'b' : printf ("OTIMO"); break;
		 
		 case 'C' : printf ("BOM"); break;
		 case 'c' : printf ("BOM"); break;
		 
		 case 'D' : printf ("REGULAR"); break;
		 case 'd' : printf ("REGULAR"); break;
		 
		case 'E' : printf ("RUIM"); break;
		 case 'e' : printf ("RUIM"); break;
		 
		 case 'F' : printf ("NOS VEMOS ANO QUE VEM ..."); break;
		 case 'f' : printf ("NOS VEMOS ANO QUE VEM ..."); break;
		 
		 default : printf ("OPERADOR INVALIDO");
		 
	 }
 }
 
 //Programa para ver classifica��o de produto
 
  #include <stdio.h>

 int main (void){
 	
     int a;
	 printf ("[DIGITE QUAL CODIGO APARECE NA EMBALAGEM]\n");
 	 scanf ("%d",&a);
 	 getchar();
 	
 	switch (a){
 		
 		case 1 : printf ("[ALIMENTO NAO-PERECIVEL]"); break;
 		case 2 : printf ("[ALIMENTO PERECIVEL]"); break;
 		case 3 : printf ("[VESTUARIO]"); break;
 		case 4 : printf ("[LIMPEZA]"); break; 
 		
 		default :printf ("[OPERADOR IVALIDO]");
	 }
 }
 
 //Programa para ver quantos dias tem cada mes
 
  #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 int main (void){
 	 
 	 int mes;
 	 printf ("[DIGITE O NUMERO CORRESPONDENTE A SEU M�S PARA SABER QUANTOS DIAS ELE TERA]\n");
 	 scanf ("%d",&mes);
 	 
 	 switch (mes){
 	 	case 1 : printf ("[POSSU� 31 DIAS]"); break;
 	 	case '01' : printf ("[POSSU� 31 DIAS]"); break;
 	 
 	 	case 2 : printf ("[POSSU� 28 DIAS EXETO EM ANO BIXESTO"); break;
 	 	case '02' : printf ("[POSSU� 28 DIAS EXETO EM ANO BIXESTO"); break;
 	 	
 	 	case 3 : printf ("[POSSU� 31 DIAS]"); break;
 	 	case '03' : printf ("[POSSU� 31 DIAS]"); break;
 	 	
 	 	case 4 : printf ("[POSSU� 30 DIAS]"); break;
 	 	case '04' : printf ("[POSSU� 30 DIAS]"); break;
 	 	
 	 	case 5 : printf ("[POSSU� 31 DIAS]"); break;
 	 	case '05' : printf ("[POSSU� 31 DIAS]"); break;
 	 	
 	 	case 6 : printf ("[POSSU� 30 DIAS]"); break;
 	 	case '06' : printf ("[POSSU� 30 DIAS]"); break;
 	 	
 	 	case 7 : printf ("[POSSU� 31 DIAS]"); break;
 	 	case '07' : printf ("[POSSU� 31 DIAS]"); break;
 	 	
 	 	case 8 : printf ("[POSSU� 31 DIAS]"); break;
 	 	case '08' : printf ("[POSSU� 31 DIAS]"); break;
 	 	
 	 	case 9 : printf ("[POSSU� 30 DIAS]"); break;
 	 	case '09': printf ("[POSSU� 30 DIAS]"); break;
 	 	
 	 	case 10 : printf ("[POSSU� 31 DIAS]"); break;
 	 	
 	 	case 11: printf ("[POSSU� 30 DIAS]"); break;
 	 	
 	 	case 12: printf ("[POSSU� 31 DIAS]"); break;
 	 	
 	 	default : printf ("[OPERADOR INV�LIDO]");
 	 }
 }
 
 
