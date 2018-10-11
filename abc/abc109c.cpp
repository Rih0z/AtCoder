/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 *******************************/

#include<iostream>
#include<map>
#include<vector>
#include<string>
#include <numeric>
#include<algorithm>

#define DEBUG false
#define FOR(i , a, b) for(size_t i = a ; i < b ; i++ )
#define REP(i,b) FOR(i , 0 , b)
#define RFOR(i,a,b) for(size_t i = a-1 ; i >= b ; i--)
#define RREP(i,a) RFOR(i,a,0)



typedef long long ll;
using namespace std;

int scanInt(void);
string scanString(void);

void scanLlArr(ll *a , int n);
void scanCharArr(char *string);

void printInt(int p);
void printLlArr(ll *a);
void printCharArr(char *string);


void perSum(ll *a , ll *sum ,int n);
int gcd(int a,int b);
/*************Global variable  **************/
int n ,x ;


/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  cin >> n >> x ;
  int a[n];
  cin >> a[0];
  a[0] = abs(a[0] - x);
  int ans = a[0];
  REP(i,n-1){
    cin >> a[i+1];
    a[i+1] = abs(a[i + 1 ] - x );
    ans = gcd(ans,a[i+1]) ;
  }

  if (DEBUG){
    std::printf("******debug********\n");
    cout << gcd(33,105)  << endl;
    std::printf("******debug********\n");
  }
  cout << ans << endl;

  return 0 ;
}


int gcd(int a,int b)
{
  if (a%b==0)
  {
    return(b);
  }
  else
  {
    return(gcd(b,a%b));
  }
}
//各地点までの部分和を計算する
void perSum(ll *a , ll *sum ,int n){
  int i ;
  sum[0] = a[0];
  for(i = 1 ; i < n ; i++){
    sum[i] = a[i] + sum[i-1];
  }

}

