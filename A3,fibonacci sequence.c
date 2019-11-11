#include <stdio.h>
int main(void)
{
	int number,i=0,first=0,second=1,next;
    printf("fibonacci sequence\n");
    printf("0 ");
    printf("1 ");
    for(number=0;number <=8; number++)

	while (i<=number-3)
	{

    next=first+second;
    first=second;
    second=next;
    printf("%d ",next);
    i++;
	}
return 0;
}
