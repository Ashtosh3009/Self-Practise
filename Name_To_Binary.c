// A-> 65-> 1000001
// B-> 66-> 1000010
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int i,l,a[30],t,d,rev,b[30];
    char ch[30];
    printf("Enter a string : ");
    fgets(ch, sizeof(ch), stdin);
    // puts(ch);
    // scanf("%s",ch);
    
    
    l = strlen(ch);
    for(i=0 ; i<l ; i++)
    {

        if(ch[i]==' ')
        b[i] = (int)ch[i];
        else
        {
        a[i] = (int)ch[i];
       
       
        //if(i == (l-1))
        //t = a[i] - 1010;
        //else
        t = a[i];
       
        rev = 1;
        while(t>0)
        {
            d = t % 2;
            rev = rev * 10 + d;
            t = t / 2;
        }
        t = rev;
        rev = 0;
        while(t>0)
        {
            d = t % 10;
            rev = rev * 10 + d;
            t = t /10;
        }
        rev = rev / 10;
        b[i] = rev;
    }}
    
    for(i=0 ; i<(l-1) ; i++)
    {
        if((char)b[i] == ' ')
        printf("\n");
        else
        printf("%d ",b[i]);
    }
    
    return 0;
}

