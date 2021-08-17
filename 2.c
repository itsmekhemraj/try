/* #include <stdio.h>
int main() 
{
    char str[200], *ptr;
    int i, vowels=0, consonant=0, digit=0, space=0, oth=0;
    printf("Enter sentence: \n");
    gets(str);
    ptr= &str[0];
    for(i=0; *(ptr+i)!='\0'; i++)
    {
        if (*(ptr+i) == 'a' || *(ptr+i) == 'e' || *(ptr+i) == 'i' || *(ptr+i) == 'o' || *(ptr+i) == 'u' || *(ptr+i) == 'A' || *(ptr+i) == 'E' || *(ptr+i) == 'I' || *(ptr+i) == 'O' || *(ptr+i) == 'U') 
        {
            vowels++;
        } 
        else if ((*(ptr+i) >= 'a' && *(ptr+i) <= 'z') || (*(ptr+i) >= 'A' && *(ptr+i) <= 'Z')) 
        {
            consonant++;
        } 
        else if (*(ptr+i) >= '0' && *(ptr+i) <= '9') 
        {
            digit++;
        } 
        else if (*(ptr+i)== ' ')
        {
            space++;
        }
        else
        {
            oth++;
        }
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    printf("\nSpecial character: %d", oth);
    return 0;
} */


#include <stdio.h>
void check(char *, int *, int *, int *, int *, int *);
int main()
{
    char str[200];
    int i, vowels, consonant, digit, space, oth;
    printf("Enter sentence: \n");
    gets(str);
    check(str, &vowels, &consonant, &digit, &space, &oth);
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonant);
    printf("\nDigits: %d", digit);
    printf("\nWhite spaces: %d", space);
    printf("\nSpecial character: %d", oth);
    return 0;
}
void check(char *pointer, int *v, int *c, int *d, int *s, int *o)
{
    *v=0, *c=0, *d=0, *s=0, *o=0;
    int i;
    for(i=0; *(pointer+i)!='\0'; i++)
    {
        if (*(pointer+i) == 'a' || *(pointer+i) == 'e' || *(pointer+i) == 'i' || *(pointer+i) == 'o' || *(pointer+i) == 'u' || *(pointer+i) == 'A' || *(pointer+i) == 'E' || *(pointer+i) == 'I' || *(pointer+i) == 'O' || *(pointer+i) == 'U') 
        {
            *v;
            v++;
        } 
        else if ((*(pointer+i) >= 'a' && *(pointer+i) <= 'z') || (*(pointer+i) >= 'A' && *(pointer+i) <= 'Z')) 
        {
            c++;
        } 
        else if (*(pointer+i) >= '0' && *(pointer+i) <= '9') 
        {
            d++;
        } 
        else if (*(pointer+i)== ' ')
        {
            s++;
        }
        else
        {
            o++;
        }
    }
}