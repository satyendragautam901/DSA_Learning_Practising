#include<iostream>
using namespace std;

void ChangeCase(char ch[]){
    
    // upper case

   /*
   for (int i = 0; ch[i] != '\0'; i++)
    {
        ch[i]-=32;
    }
   */ 

   // lowercase

   /*
   for (int i = 0; ch[i] != '\0'; i++)
    {
        ch[i]+=32;
    }
   */

   // MIXED CHARACTERS to lowercase

   for (int i = 0; ch[i] != '\0'; i++)
    {
       if (ch[i]>=65 && ch[i]<=90)
       {
        ch[i]+=32;
       }
       
    }

    // MIXED CHARACTERS to uppercase

   for (int i = 0; ch[i] != '\0'; i++)
   {
      if (ch[i]>=97 && ch[i]<=122)
      {
       ch[i]-=32;
      }
      
   }
   
    cout<<ch<<endl;
    
}
int main()
{
    // char name[] = "welcome";
    char name[] = "RamKaGhar";
    ChangeCase(name);
  return 0;
}