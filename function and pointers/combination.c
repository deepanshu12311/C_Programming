#include<stdio.h>
#include<math.h>
int combination(int n, int r){
    int nfact=1, rfact=1, nrfact=1;
    for(int i=1;i<=n;i++)
    {
        nfact=i*nfact;
    }
    for(int j=1; j<=r;j++)
    {
        rfact=j*rfact;
    }
    for(int k=1; k<=n-r;k++)
    {
        nrfact=k*nrfact;
    }
   int ncr= nfact/(rfact*nrfact);
   return ncr;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r:");
    scanf("%d",&r);
    float answer = combination(n,r);
    printf("combination:%f",answer);


    return 0;
}