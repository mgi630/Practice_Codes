#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[1000];
    char ch;
   
    FILE *fptr;
    fptr = fopen("Write.txt","a+");
    if(fptr == NULL)
    {
        fprintf(stderr, "Error in opening the file for appending\n");
        exit(1);
    }

    printf("Enter the sentence:");
    scanf("%s",string);

    //do 
    fprintf(fptr,"%s\n",string);
    
    //while(ch = !feof);

    fclose(fptr);

    return 0;
}