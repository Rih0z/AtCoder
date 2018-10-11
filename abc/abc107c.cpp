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

/*************Global variable  **************/
char str[26];
std::map<char,int> M ;
int N,K ;
/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  cin >> N >> K ;
  int a[N];
  REP(i,N)
    cin >> a[i] ;
  int dis= 0 ;
  int ans = 999999999 ;
  REP(i,N){
    dis = abs(a[i]) + abs(a[i+(K-1)] - a[i]);
    if(ans > dis)
      ans = dis ;
    if(i+(K) ==N)
      break;
  }
  RREP(i,N){
    dis = abs(a[i]) + abs(a[i] - a[i-(K-1)] );
    if(ans > dis)
      ans = dis ;
    if(i -(K-1)== 0)
      break;
  }
  cout << ans << endl;

  if (DEBUG){
    std::printf("******debug********\n");

    std::printf("******debug********\n");
  }
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

