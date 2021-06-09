#include<stdio.h>
int main()
{
    int bas_sal;
    float tot_sal;
    printf("Enter basic salary: ");
    scanf("%d", &bas_sal);
   
    int temp = bas_sal;

    if(bas_sal>40000)
    temp = 1;
    else if(bas_sal>=30000 && bas_sal<=40000)
    temp = 2;
    else if(bas_sal>=20000 && bas_sal<=30000)
    temp = 3;
    else if(bas_sal>=10000 && bas_sal<=20000)
    temp = 4;
    else if(bas_sal<10000)
    temp = 5;

    switch(temp)
    {
        case 1: 
        tot_sal = bas_sal*1.55;
        break;
        case 2: 
        tot_sal = bas_sal*1.55; 
        break;
        case 3: 
        tot_sal = bas_sal*1.57;
        break;
        case 4: 
        tot_sal = bas_sal*1.6;
        break;
        case 5: 
        tot_sal = bas_sal*1.58;
        break;
    }
    printf("Total salary: %f", tot_sal);
    return 0;
}