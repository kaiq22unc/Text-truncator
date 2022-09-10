// PID: 730531208s
// I pledge the COMP 211 honor code.
#include <stdio.h>

int main()
{
    int c, nl, nc, length, i, linecounter, j;
    int nOff[100];    

    nl = 0;
    length = 0; 
    nc = 0;
    i = 0;
    linecounter = -1;
    

	while ((c = getchar()) != EOF)
    {
         int * lastchar = &c; 
         ++nc;
         ++length;
         if ( c == '\n')
         {
             ++linecounter;
             if ( length > 51)
             {
                 ++nl;
                 nOff[i] = linecounter;
                 ++i;
             }
             length = 0;
         }

         if (c == '\n')
         {
             nc = 0;
             putchar(c); 
         }
  
         if (c != '\n')
             putchar(c);
          
         if (nc % 50 == 0 && c != '\n') 
         {
             putchar('\n');
         }

         if (c == '\n' && lastchar[-1] == '\n')
             putchar('\n');
         
         
        }

    printf("\n");
    printf("Total lines over 50 chars: %d\n", nl);
    printf("Offending lines: ");
    for (j = 0; j < nl; ++j)
        printf("%d, ", nOff[j]);
    printf("\n");
    }
       

