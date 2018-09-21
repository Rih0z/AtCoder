#include<iostream>
int count = 0 ;
int n;
bool dfs(int *a,int i , int sum ,int presum ,int add ){
  if(sum == 0 && add && presum != sum){
    count++;
  }
  if(i < n){
    if(add){
      dfs(a,i+1,sum + a[i],sum,1);
    }
    else{
      dfs(a,i+1  , sum,sum,0);
      dfs(a,i+1,sum + a[i],sum,1);
    }
  }
}

int main(){
  int j ;
  scanf("%d",&n);
  int a[n];
  for ( j = 0 ;   j < n ; j++ ){
    scanf("%d",&a[j]);
  }
  dfs(a,0,0,0,0);

  printf("%d\n",count);

  return 0 ;
}
