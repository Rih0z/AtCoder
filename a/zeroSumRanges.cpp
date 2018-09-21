#include<iostream>

int main(){
  int n ; 
  scanf("%d",&n);
  int a[n];
  int i ,j,k,l;
  int count = 0 ;
  for ( i = 0 ;   i < n ; i++ ){
    scanf("%d",&a[i]);
  }
  int sum[n-1] ;
  for(k = 0 ; k < n - 1 ; k++){
    for (i = 0 ; i < n ; i++){
      sum[k] = a[i];
      if (i+1 != n&& i+k+1 < n){
        for(l = i+1 ; l < k+i+1 ; l++) if(l < n )sum[k] += a[l];
          if( sum[k] == -a[i+k + 1 ])  {
            count++;
          }
      }
    }
  }
  printf("%d\n",count);

  return 0 ;
}
