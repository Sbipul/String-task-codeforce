#include<stdio.h>
#include<string.h>
int main()
{

    char s[102];
    int i;
    fgets(s,sizeof(s),stdin);
    for(i=0; i<strlen(s)-1; i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            s[i] +=32;
        }
        if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='y'))
        {
            printf(".%c",s[i]);
        }
    };



    /*
    char a[101];
    int i;
    gets(a);
    strlwr(a);
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
            ;
        else
            printf(".%c",a[i]);
    }
    */
    return 0;
}
