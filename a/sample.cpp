/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 *******************************/

#include<iostream>
#include<map>

#define DEBUG false

typedef long long ll;
using namespace std;

int scanN(void );
void scanA(ll *a , int n);
void intPrintf(int p);
void llPrintN(ll *a,int n);
void perSum(ll *a , ll *sum ,int n);
ll countSumX( std::map<ll,ll> m,ll *sum,int n );

/*************  **************/
int N ;
ll A[200010];
ll SUM[200010];
std::map<ll,ll> M ;

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  int i,j ;

  N  = scanN();
  scanA(A,N);

  if (DEBUG){
    std::printf("******debug********\n");

    std::printf("******debug********\n");
  }
  cout << countSumX( M , SUM, N) << endl;
  return 0 ;
}

//各地点までの部分和を計算する
void perSum(ll *a , ll *sum ,int n){
  int i ;
  sum[0] = a[0];
  for(i = 1 ; i < n ; i++){
    sum[i] = a[i] + sum[i-1];
  }

}
/******** scan **************/
int scanN(void ){
  static int n ;

  if(std::scanf("%d",&n)){
  }else{
    std::printf("scanN error\n");
    std::exit(1);
  }

  return n ;
}
void scanA(ll *a , int n){
  int ireadA ; 
  for (ireadA =  0 ; ireadA < n ; ireadA++){
    if(std::scanf("%lld",&a[ireadA])){
    }else{
      std::printf("readA error\n");
      std::exit(1);
    }
  }
}
/************* print **************/
void intPrintf(int p){
  if(std::printf("%d\n",p)){
  }else{
    std::printf("intPrintf Error\n");
    std::exit(1);
  }
}

void llPrintN(ll *a,int n){
  int i ;
  for(i = 0 ; i < n ; i++){
    if(std::printf("%lld ",a[i] )){
    }else{
      std::printf("intPrintN Error i = %d stopped \n",i);
      std::exit(1);
    }
  }
  std::printf("\n");
}
