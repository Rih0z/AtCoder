
/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 *******************************/

#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<numeric>
#include<algorithm>
#include<cmath>

#define DEBUG false

#define FOR(i , a, b) for(size_t i = a ; i < b ; i++ )
#define REP(i,b) FOR(i , 0 , b)
#define RFOR(i,a,b) for(size_t i = a-1 ; i >= b ; i--)
#define RREP(i,a) RFOR(i,a,0)



typedef long long ll;
using namespace std;

double scandouble(void);
string scanString(void);

void scanLlArr(ll *a , double n);
void scanCharArr(char *string);

void prdoubledouble(double p);
void prdoubleLlArr(ll *a);
void prdoubleCharArr(char *string);


void perSum(ll *a , ll *sum ,double n);

/*************Global variable  **************/
double N ;
char str[26];
std::map<char,double> M ;
int K ;
/*******************************/

int main(){
  cin >> N >>K ;
  int ans ; 
  REP(i,N){
    ans = K + (K-1)*(i-1);
    if(ans >= N)
      ans = i;
      break;
  }
  cout << ans << endl ;
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

