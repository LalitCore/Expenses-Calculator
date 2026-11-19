#include <stdio.h>

int main()
{
    int sum = 0, avg = 0;
    
    int clothes[5], travel[5], food[5], otherexp[5], fee[5], i;
    // for expenses
    int *ptr_clothes = &clothes[0], *ptr_travel = &travel[0],  *ptr_food = &food[0], *ptr_otherexp = &otherexp[0], *ptr_fee = &fee[0];
    // for pointers
    printf("----Enter your expenses----\n");
    
        for(i=0; i<5; i++)
    {
    printf("Enter clothes expense: ");
    scanf("%d", &clothes[i]);
    }
     for(i=0; i<5; i++)
    {
    printf("Enter food expenses: ");
    scanf("%d", &food[i]);
    }
     for(i=0; i<5; i++)
    {
    printf("Enter travel expenses: ");
    scanf("%d", &travel[i]);
    }
     for(i=0; i<5; i++)
    {
    printf("Enter fee: ");
    scanf("%d", &fee[i]);
    }
     for(i=0; i<5; i++)
    {
    printf("Enter other exenses: ");
    scanf("%d", &otherexp[i]);
    }

    
    
    printf("---your expenses are---");
    for(i=0;i<5;i++)
    {
        printf("expenses on clothes are : %d\n", *ptr_clothes);
        *ptr_clothes++;
    }    
    for(i=0;i<5;i++)
    {
        printf("expenses on travel are : %d\n", *ptr_travel);
        *ptr_travel++;
    } 
    for(i=0;i<5;i++)
    {
        printf("expenses on fee are : %d\n", *ptr_fee);
        *ptr_fee++;
    } 
    
    for(i=0;i<5;i++)
    {
        printf("expenses on food are : %d\n", *ptr_food);
        *ptr_food++;
    } 
    for(i=0;i<5;i++)
    {
        printf("other expenses : %d\n", *ptr_otherexp);
        *ptr_otherexp++;
    } 
    ptr_clothes = clothes;
    ptr_travel = travel;
    ptr_food = food;
    ptr_otherexp = otherexp;
    ptr_fee = fee;
    for(i=0;i<5;i++)
    {
        
        sum += *ptr_food + *ptr_travel + *ptr_clothes + *ptr_otherexp + *ptr_fee;
        *ptr_food++;
        *ptr_travel++;
        *ptr_clothes++;
        *ptr_otherexp++;
        *ptr_fee++;
        
    }

    printf("Total of your expenses are : %d\n",sum);
    
        
        avg = sum/5;
        
    
    printf("Average of expenses are : %d\n",avg);
    return 0;
}