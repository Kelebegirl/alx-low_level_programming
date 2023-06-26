#include <stdio.h>

/**
 * largest_prime_factor - prints the largest prime factor
 *largest_prime_factor - prints the largest prime factor
 *
 *
 *
 */

void largest_prime_factor(unsigned long a)
{
    int i = 2 ,largest = 2;

    while(a! = 1)
    {
        if(a % i == 0)
        {
            while(a % i == 0)
            {
                a = a/i;

                printf("%d ",i);

                if(i > largest)
                {
                    largest = i;
                }
            }
        }

        i++;
    }

    return largest;
}

main()
{
    unsigned long inputnumber;

    printf("Enter a number : ");
    scanf("%d",&inputnumber);

    printf("\nThe largest prime factor of %d is %d",inputnumber,largestprimefactor(inputnumber));
}

