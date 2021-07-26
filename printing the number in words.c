#include <stdio.h>

int number();
int main()
{
    int num;
    int numrev[100];
    printf("Enter number >>");
    scanf("%d", &num);
  //  printf("You have entered %d\n", num);
    int a=0;
    int original = num;
    while(num != 0)
    {
        numrev[a] = num%10;
        num = num/10;
        printf("%d\n", numrev[a]);
        a++;
    }
    a--;
    while(a >= 0)
    {
        switch(numrev[a])
        {
            case 0:
                    printf("zero 0 ");
                    break;
                    
            case 1:
                    printf("one 1 ");
                    break;
                    
            case 2:
                    printf("two 2 ");
                    break;
                    
            case 3:
                    printf("three 3 ");
                    break;
                    
            case 4:
                    printf("four 4 ");
                    break;
                    
            case 5:
                    printf("five 5 ");
                    break;
                    
            case 6:
                    printf("six 6 ");
                    break;
                    
            case 7:
                    printf("seven 7 ");
                    break;
                    
            case 8:
                    printf("eight 8 ");
                    break;
                    
            default:
                    printf("nine 9 ");
                    break;
        }
        a--;
    }
}
