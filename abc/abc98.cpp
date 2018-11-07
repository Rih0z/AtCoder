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
string S ;
char str[26];
std::map<char,int> M ;
/*******************************/
int func(string s , string t ){
  int ans = 0 ;
  for(char c = 'a' ; c <= 'z' ; c++ ){
  bool founds = false ;
  bool foundt = false ;
    for(int i = 0 ; i < s.length(); i++){
      if(s[i] == c)
        founds = true;
    
    }

    for(int i = 0 ; i < t.length(); i++){
      if(t[i] == c)
        foundt = true;
    
    }
    if(founds && foundt)
      ans++;
  }
  return ans;
}

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  cin >> N >> S ;
  int ans = 0 ;
  for(int i =0 ; i < N; i++ ){
    int tmp = func(S.substr(0,i),S.substr(i));
    ans = max(tmp,ans);
  
  }
  cout << ans << endl ;

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

