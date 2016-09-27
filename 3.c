#include <stdio.h>
int convert(char s[])
{
    int n,i;
    n=0;
    for ( i = 0; (s[i]>='0' && s[i]<='9')||(s[i]=='.')||(s[i]=='e')||(s[i]=='-');++i)
    {
        if (s[i]=='.' || s[i]=='e' || s[i]=='-')
        {
            i++;
        }
        n=10*n+(s[i]-'0');

    }
    return n;
    printf("\n");
}
int main()
{
char s[]="123.53e-6";
    printf("%d",convert(s));
}
