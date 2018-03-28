#include<cs50.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, string argv[])
{
    if(argc != 2)
    {
     printf("\nUsage: ./caesar k");
     return 1;
    }

    int k= atoi(argv[1]);

    string plaintext=get_string();
	// get_string = function for input a string
    printf("\nHere is you plaintext in crypto forn");
    //for manupulate and print the charecter in crypto form
      for(int i=0; i<strlen(plaintext);i++)
      {
          // type casting of charector into int ((int)(plaintext[i])
          if((int)(plaintext[i])>64 && (int)(plaintext[i])< 91)
            //for a - z
          printf("%c",((((int)(plaintext[i])+k)-(int)'a')%26)+(int)'a');
          if((int)(plaintext[i])>96 && (int)(plaintext[i])< 122)
          //for A - Z
         printf("%c",((((int)(plaintext[i])+k)-(int)'A')%26)+(int)'A');
          else
          //otherwise print as it is...
           printf("%c",plaintext[i]);

      }

 return 0;
}