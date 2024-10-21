#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[100];
    printf("Enter the sentence : ");
    fgets(sentence,100,stdin);

    char word[100];
    printf("Enter the word : ");
    scanf("%s",&word);

    int slen = strlen(sentence);
    int wlen = strlen(word);

    int findex;
    int lindex;

    for(int i=0; i<=slen-wlen; i++)
    {
        int count=0;
        while(count < wlen)
        {
            if(sentence[i+count] == word[count] && sentence[i-1]==' ')
            {
                count++;
            }
            else{
                break;
            }
        }
        if(count==wlen)
        {
            for(int k=i; k<i+wlen; k++)
            {
                sentence[k] = '_';
            }
            i = i + wlen;
        }
    }

    printf("The Updated Sentence is : %s",sentence);

    return 0;
}