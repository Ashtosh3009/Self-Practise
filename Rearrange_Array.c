//Program for rearranging the array in the following example manner
// Original array : {1,2,3,4,5,6}
// New array : {1,4,2,5,3,6}
#include <stdio.h>
int main()
{
    int length,first,second;
    printf("Enter length of array : ");
    scanf("%d",&length);
    int ArrayOld[length],ArrayNew[length];
    printf("Enter %d elements of array : ",length);
    for(first=0 ; first<length ; first++)
    {
        scanf("%d",&ArrayOld[first]);
    }
    for(first=0,second=0 ; first<length ; first+=2,second++)
    {
        ArrayNew[first] = ArrayOld[second];
        ArrayNew[first+1] = ArrayOld[second+(length/2)];
    }
    printf("New array : ");
    for(first=0 ; first<length ;first++)
    printf("%d\n",ArrayNew[first]);
    return 0;
}
