#include <stdio.h>
int main(){
    long long int t,i,j;
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        long long int n,h;
        scanf("%lld %lld",&n,&h);
        long long int arr1[n];
        int max=0,second_max=0;
        for(j=0;j<n;j++){
            scanf("%lld",&arr1[j]);
            if(arr1[j]>max){
                second_max=max;
                max=arr1[j];
            }else if(arr1[j]>second_max){
                second_max=arr1[j];
            }
        }
        if(h-max<=0){
            printf("1\n");
        }else if(h-(max+second_max)<=0){
            printf("2\n");
        }else{
            long long int c = h/(max+second_max);
            h=h%(max+second_max);
            long long int d = c*2;
            if(h==0){
                printf("%lld\n",d);
            }else if(h-max<=0){
                printf("%lld\n",d+1);
            }else if(h-(max+second_max)<=0){
                printf("%lld\n",d+2);
            }
        }
    }
    return 0;
}
