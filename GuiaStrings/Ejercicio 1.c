#include <stdio.h>

 int
main () 
{
  
char a[20];
  
int col = 0;
  
printf ("Ingrese una palabra de hasta 20 letras: ");
  
scanf ("%s", a);
  
for (int i = 0; i < 20 && a[i] != '\0'; i++)
    {
      
col++;
    
} 
printf ("\nCantidad de letras: %d", col);
  
return 0;

}


 
 
 
 
