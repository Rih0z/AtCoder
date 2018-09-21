/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 * https://agc023.contest.atcoder.jp/submissions/2426301 
 * Kazune Takahashi さんのものを参考にしました
 *******************************/

#include<iostream>
#include<map>

#define DEBUG false

typedef long long ll;
using namespace std;

int scanN(void );
void readA(ll *a , int n);
void intPrintf(int p);
void llPrintN(ll *a,int n);
void perSum(ll *a , ll *sum ,int n);
ll countSumX( std::map<ll,ll> m,ll *sum,int n );

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
  readA(A,N);
  perSum(A,SUM,N);
  M[0] = 1;

  if (DEBUG){
    std::printf("******debug********\n");
    std::printf("a[] = ");
    llPrintN(A,N);
    std::printf("sum[] = ");
    llPrintN(SUM,N);
    std::printf("count = \n");
    std::printf("******debug********\n");
  }
  cout << countSumX( M , SUM, N) << endl;
  return 0 ;
}
//和がxになるところの数を数える
ll countSumX( std::map<ll,ll> m,ll *sum,int n ){
  static ll count;
  for(int i = 0 ; i < N ; i++){
    if ( m.find(sum[i]) == m.end()){
      //見つからなかった
      m[sum[i]] = 1;
    }else{
      //見つかった
      m[sum[i]]++;
    }
  }
  for (auto x : m){
    ll c = x.second;
    count += c * (c-1)/2;
  }
  return count;
}
//各地点までの部分和を計算する
void perSum(ll *a , ll *sum ,int n){
  int i ;
  sum[0] = a[0];
  for(i = 1 ; i < n ; i++){
    sum[i] = a[i] + sum[i-1];
  }

}
int scanN(void ){
  static int n ;

  if(std::scanf("%d",&n)){
  }else{
    std::printf("scanN error\n");
    std::exit(1);
  }

  return n ;
}
void readA(ll *a , int n){
  int ireadA ; 
  for (ireadA =  0 ; ireadA < n ; ireadA++){
    if(std::scanf("%lld",&a[ireadA])){
    }else{
      std::printf("readA error\n");
      std::exit(1);
    }
  }
}

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
