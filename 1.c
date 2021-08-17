                        // method 1

/* #include <stdio.h>
int main()
{
    int arr[50], n, i, temp=0, j;
    printf("Limit:- ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
        for(i=0; i<n; i++)
    {
        for(j=(i+1); j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
    printf("\n\nAfter sorting: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
} */


                                    

                                    // method 2
/* #include <stdio.h>
void sort(int array[], int);
int main()
{
    int arr[50], n, i;
    printf("Limit:- ");
    scanf("%d", &n);
    printf("Enter %d integers: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    sort(arr, n);
    printf("\n\nAfter sorting: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}

void sort(int array[], int x)
{
    int temp, i, j;
    for(i=0; i<x; i++)
    {
        for(j=(i+1); j<x; j++)
        {
            if(array[i]>array[j])
            {
                temp= array[i];
                array[i]= array[j];
                array[j]= temp;
                
            }
        }    
    }
    //return array[i];
}  */


                                    // method 3

#include <stdio.h>
void pass(int *, int);
int main()
{
    int arr[50], n, i, *ptr;
    printf("Limit:- ");
    scanf("%d", &n);
    ptr= arr;
    printf("Enter %d integers: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", (ptr+i));
    }    
    printf("Before sorting: \n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", *(ptr+i));
    }

    pass(&arr, n);
    return 0;
}
void pass(int *ptr, int x)
{
    int temp, i, j;
    for(i=0; i<x; i++)
    {
        for(j=(i+1); j<x; j++)
        {
            if(*(ptr+i) > *(ptr+j))
            {
                temp= *(ptr+i);
                *(ptr+i)= *(ptr+j);
                *(ptr+j)= temp;
            }
        }
    }
    printf("\nAfter sorting: \n");
    for(i=0; i<x; i++)
    {
        printf("%d\t", *(ptr+i));
    }
}