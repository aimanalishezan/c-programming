#include<stdio.h>
int main()
{
    char s1[100],ch;
    int i,vowel,con,digit,word,others;
    printf("Enter a sentense:");
    gets(s1);

    i=vowel=con=digit=word=others=0;
    while((ch=s1[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        vowel++;
        else if(ch>='a'&&'z'||(ch>='A'&&'Z'))
        con++;
        else if(ch>='0'&&ch<='9')
        digit++;
        else if(ch==' ')
        word++;
        else
        others++;
        i++;
    }
    word++;
    printf("number of vowel= %d\n",vowel);
    printf("number of consonant= %d\n",con);
    printf("number of digit= %d\n",digit);
    printf("number of words= %d\n",word);
    printf("number of others= %d\n",others);

}