#include <stdio.h>

int main() {
	int T,k;
	int a[101],b[101],c[1000000];
	int sum = 0 ,check = 0;
	 scanf("%d",&T);
	 //printf("%d",T);
	 for(int i=0;i<T;i++)
	 { scanf("%d%d",&a[i],&b[i]) ;
	   // printf("%d %d\n" ,a[i],b[i]) ;
	   for(int j=0;j<a[i];j++)
	   { scanf("%d",&c[j]);
	     for(k = j;k>-1;k--)
	     {   sum = sum+c[k];
	         //printf("%d %d\n",sum,k);
	         if(sum > b[i]){
	             sum = 0;
	             break;
	             }
	         else if(sum == b[i]){
	             if(check == 0){
	             printf("%d %d\n",k+1,j+1);
	             check = 1;
	             sum = 0;
	             break;
	           }}
	         else if(k == 0){
	             sum =0;
	         } 
	         
	     }
	        
	     if(j==a[i]-1){
	         if(check == 0)
	            printf("-1\n");
	         else 
	           check = 0;
	             }
	        
	    }
	     } 
     return 0;
}