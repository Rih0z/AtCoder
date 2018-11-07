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
int N ;
char str[26];
std::map<char,int> M ;
/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  int count = 0 ;
  cin >> N ;
  int  n7 ,n4 ;
  int ans = 0;
  if(N%4==0 || N%7 ==0 ||N%11 == 0){
    cout << "Yes" << endl;
    return 0 ;
  }else {
    n7 = N ;
    n4 = N ;
    while(n7 > 0 ){
      n7 = n7 -7 ;
      if(n7 > 0 ){
        if(n7%4==0 || n7%7 ==0 ||n7%11 == 0){
          cout << "Yes" << endl;
          return 0 ;
        }
      }
    }
    while(n4 > 0 ){
      n4 = n4 -4 ;
      if(n4 > 0 ){
        if(n4%4==0 || n4%7 ==0 ||n4%11 == 0){
          cout << "Yes" << endl;
          return 0 ;
        }
      }
    }
    n7 += 7;
    n4 += 4 ;
    if(n7%4 == 0 ){
      cout << "Yes" << endl;
      return 0 ;
    }

  }
  cout << "No" << endl;

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

