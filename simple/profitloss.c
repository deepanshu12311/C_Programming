#include<stdio.h>
int main(void)
{
    float cp;
    float sp;
    printf("Enter cost price:\n");
    scanf("%f",&cp);

    printf("Enter selling price:\n");
    scanf("%f", &sp);
    if (sp>cp)
    {
        float profit;
       
        profit=((sp-cp)/cp)*100;
        printf("Profit is gain:%f ",profit );
    }
        if (sp<cp)
            {
        float loss;
     
        loss=((cp-sp)/cp)*100;
        printf("loss of:%f ",loss);
    }
    if (sp==cp)
    {
        printf("no profit no gain...");
    }
    

    return 0;
}