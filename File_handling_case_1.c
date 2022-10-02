// OBJECTIVE : To create a file handling operation so as to read from the file 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;
    //char ch;
    char str[1000];
    
    fptr = fopen("File_handling_Case_1.txt","r");
    if(fptr == NULL)
    {
        fprintf(stderr,"Error in opening the file for reading\n");
        exit(1);
    }
    
    // do 
    // {
    //     ch = fgetc(fptr);
    //     printf("%c", ch);
    // } 
    // while (ch != EOF);

    while (fgets(str, 50, fptr) != NULL) 
    {
        printf("%s", str);
    }

    fclose(fptr);

    return 0;
}