#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);

    int max = 0;
    int fIndex = -1;
    int lIndex = -1;

    int i=0;
    while(i<strlen(str))
    {
        int j=i; 
        int count = 0;
        while(str[j] != ' ' &&  j<strlen(str))
        {
            count++; 
            j++;    
        }

        if(count > max) 
        {              
            max = count;
            fIndex = i;
            lIndex = j-1;
        }

        i = j+1;
    }

   
    for(int i=fIndex; i<=lIndex; i++)
    {
        str[i] = '_';
    }

    printf("The new string is : %s",str);

    return 0;
}