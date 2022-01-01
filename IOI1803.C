#include <stdio.h>
#include<ctype.h>


int main()
{
    char n[50];
    gets(n);
    int g=0;
    int l=strlen(n);
    n[0]=toupper(n[0]);
    n[l-1]=toupper(n[l-1]);
    for(int i=0;i<l;++i)
      {
          if(n[i]==' ')
          {
            n[i-1]=toupper(n[i-1]);
            n[i+1]=toupper(n[i+1]);
          }
          else
           g++;
          
      }
      
  
  
    for(int i=0;i<l;++i)
    {
       printf("%c",n[i]);
    }
    return 0;
    
    
    
   
   
}