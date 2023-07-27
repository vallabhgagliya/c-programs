#include<stdio.h>
 int main()
 {
    int category;
     float energycharges,fpppa,fixedcharge,govduty,totalbillamt,fpppacharges,units,calculate_unit;
     
     printf("entered the consumed units:");
     scanf("%f",&units);
     printf("1.rgp\n2.glp\n3.bpl\n4.non-rgp\n");
     printf("please select your category from 1 to 4:");
     scanf("%d",&category);
     
    switch(category)
    {
        case 1:
               printf("you selected rgp\n");
               printf("%f Unit::\n",units);
    
            int limit50 = 50;
            int limit150 = 150;
            int remainingunits = 58;
            energycharges = 0;
            calculate_unit = units;
            if (limit50 <= calculate_unit)
            {
              energycharges = energycharges + (limit50 * 3.20);
              calculate_unit = calculate_unit - limit50;
              
            }
             if (limit150 <= calculate_unit)
            {
               energycharges = energycharges + (limit150 * 3.95);
               calculate_unit = calculate_unit - limit150;
               
            }
             if (remainingunits > 0) 
            {
                energycharges = energycharges + (remainingunits * 5);
                calculate_unit = calculate_unit - remainingunits;
                printf("%f is a energycharges\n",energycharges);
                
            }
           
            
            printf("enter fpppa charge value in ruppies:");
            scanf("%f",&fpppacharges);
            fpppa=fpppacharges*units;
            fixedcharge=1260;
           printf("%f is the value of fpppa\n",fpppa);
             printf("%f is the value of fixedcharge\n",fixedcharge);
            govduty=(energycharges+fpppa+fixedcharge)*0.2;
             printf("%f is the value of govduty\n",govduty);
            totalbillamt=energycharges+fpppa+fixedcharge+govduty;
             printf("%f is the value of fullbillamt\n",totalbillamt);
             printf("  thank you   ");
         break;
        case 2:
             printf("you selected glp\n");
             printf("%f Unit::\n",calculate_unit);
           int limit200 = 200;
            
            int remainingunits2 = 58;
            energycharges = 0;
            if (limit200 <= calculate_unit)
            {
              energycharges = energycharges + (limit200 * 4.10);
              calculate_unit = calculate_unit - limit200;
             
            }
             
             if (remainingunits2 > 0) 
            {
                energycharges = energycharges + (remainingunits2 * 4.80);
                units = units - remainingunits2;
                printf("%f is a energycharges\n",energycharges);
           }
             printf("enter fpppa charge value in ruppies:");
            scanf("%f",&fpppacharges);
            fpppa=fpppacharges*units;
            fixedcharge=1260;
           printf("%f is the value of fpppa\n",fpppa);
        printf("%f is the value of fixedcharge\n",fixedcharge);
            govduty=(energycharges+fpppa+fixedcharge)*0.2;
        printf("%f is the value of govduty\n",govduty);
            totalbillamt=energycharges+fpppa+fixedcharge+govduty;
        printf("%f is the value of fullbillamt\n",totalbillamt);
        printf("  thank you   ");
         break;
        case 3:
            printf("you selected bpl\n");
            printf("%f Unit::\n",calculate_unit);
            int limit501 = 50;
            int limit1501 = 150;
            int remainingunits3 = 58;
            energycharges = 0;
            if (limit50 <= calculate_unit)
            {
              energycharges = energycharges + (limit501 * 1.50);
              calculate_unit = calculate_unit - limit501;
    
            }
             if (limit1501 <= calculate_unit)
            {
               energycharges = energycharges + (limit1501 * 3.95);
               calculate_unit = calculate_unit - limit1501;
            }
             if (remainingunits3 > 0) 
            {
                energycharges = energycharges + (remainingunits3 * 5);
                calculate_unit = calculate_unit - remainingunits3;
                printf("%f is a energycharges\n",energycharges);
           }
            printf("enter fpppa charge value in ruppies:");
            scanf("%f",&fpppacharges);
            fpppa=fpppacharges*units;
            fixedcharge=1260;
           printf("%f is the value of fpppa\n",fpppa);
        printf("%f is the value of fixedcharge\n",fixedcharge);
            govduty=(energycharges+fpppa+fixedcharge)*0.2;
        printf("%f is the value of govduty\n",govduty);
            totalbillamt=energycharges+fpppa+fixedcharge+govduty;
        printf("%f is the value of fullbillamt\n",totalbillamt);
        printf("  thank you   ");
            
         break;
        case 4:
              printf("you selected non-rgp\n");
               printf("%f Unit::\n",units);
            if (units<=15) 
            {
               energycharges=units*5.00;
                printf("%f is a energycharges",energycharges);
            }
            else
            {
                energycharges=units*4.60;
                printf("%f is a energycharges\n",energycharges);
                
            }  
           
            printf("enter fpppa charge value in ruppies:");
            scanf("%f",&fpppacharges);
            fpppa=fpppacharges*units;
            fixedcharge=1260;
           printf("%f is the value of fpppa\n",fpppa);
        printf("%f is the value of fixedcharge\n",fixedcharge);
            govduty=(energycharges+fpppa+fixedcharge)*0.2;
        printf("%f is the value of govduty\n",govduty);
            totalbillamt=energycharges+fpppa+fixedcharge+govduty;
        printf("%f is the value of fullbillamt\n",totalbillamt);
        printf("  thank you   ");
        
        
    }    
          
   return 0;
}