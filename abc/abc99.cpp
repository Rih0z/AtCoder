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

#define DEBUG true

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
int N ;
char str[26];
std::map<char,int> M ;
int a,b,a1,b1;

/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  int cnt9 = 0;
  int cnt6 = 0 ;
  int ans = 0 ;
  int times = 0 ;
  cin >> N ;
  while(N > 5 ){
    for(int i= 1;; i++){
      if(N >= pow(9,i))
      {
        cnt9++;
      }
      else{
        break;
      }
    }
    if(cnt9 >0){
      times = N/pow(9,cnt9);
      ans += times;
      N -= pow(9,cnt9) * times ;
      cnt9 = 0 ;
    }
    for(int i= 1;; i++){
      if(N >= pow(6,i))
      {
        cnt6++;
      }
      else{
        break;
      }
    }
    if(cnt6 >0){
      times = N/pow(6,cnt6);
      ans += times;
      N -= pow(6,cnt6) * times ;
      cnt6= 0 ;
    }
  }
  cout << ans + N << endl;
  if (DEBUG){
    std::printf("******debug********\n");
    cout << ans << "  " << N << endl;
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

