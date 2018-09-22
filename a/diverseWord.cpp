/*******************************
 * written by Koki Riho
 * Rih0z https://github.com/Rih0z
 *******************************/

#include<iostream>
#include<map>

#define DEBUG false

typedef long long ll;
using namespace std;

int scanInt(void);
string scanString(void);

void scanLlArr(ll *a , int n);
void scanCharArr(char *string);

void printInt(int p);
void printLlArr(ll *a);
void printCharArr(char *string);
void printChar(char c);


void perSum(ll *a , ll *sum ,int n);

/*************diverse word *****************/
void checkLetter(void);
void setABC(void);
void setABC2(void);
void seekNextWord(void);
/*************Global variable  **************/
int N ;
char str[26];
std::map<char,int> M ;
std::map<int,char> abc ;
/*******************************/

int main(){
  if (DEBUG){
    std::printf("******debug mode********\n");
  }
  int i,j ;
  setABC();
  scanCharArr(str);
  checkLetter();
  seekNextWord();
  if (DEBUG){
    std::printf("******debug********\n");

    std::printf("******debug********\n");
  }
  cout << str << "\n";
  return 0 ;
}

void seekNextWord()
{
  int i ; 
  for(i = 1; i <= 26 ; i++){
      if(M.find(abc[i]) ==M.end())
      {
        printChar(abc[i]);
        sprintf(str,"%s%c",str,abc[i]);
        break;
      }
      else{
      }
  }
}
void checkLetter(void){
  int i ;
  M[0] = 0 ;
  for (i = 1 ; i <= sizeof(str)/sizeof(char) ; i++){
      M[str[i-1]] = i ;
  }
}
void setABC2(void){
  int num = 1;
  abc['a'] = num++;
  abc['b'] = num++;
  abc['c'] = num++;
  abc['d'] = num++;
  abc['e'] = num++;
  abc['f'] = num++;
  abc['g'] = num++;
  abc['h'] = num++;
  abc['i'] = num++;
  abc['j'] = num++;
  abc['k'] = num++;
  abc['l'] = num++;
  abc['m'] = num++;
  abc['n'] = num++;
  abc['o'] = num++;
  abc['p'] = num++;
  abc['q'] = num++;
  abc['r'] = num++;
  abc['s'] = num++;
  abc['t'] = num++;
  abc['u'] = num++;
  abc['v'] = num++;
  abc['w'] = num++;
  abc['x'] = num++;
  abc['y'] = num++;
  abc['z'] = num++;
}

void setABC(void){
  int num = 1;
  abc[0] = 0 ;
  abc[num++] = 'a';
  abc[num++] = 'b';
  abc[num++] = 'c';
  abc[num++] = 'd';
  abc[num++] = 'e';
  abc[num++] = 'f';
  abc[num++] = 'g';
  abc[num++] = 'h';
  abc[num++] = 'i';
  abc[num++] = 'j';
  abc[num++] = 'k';
  abc[num++] = 'l';
  abc[num++] = 'm';
  abc[num++] = 'n';
  abc[num++] = 'o';
  abc[num++] = 'p';
  abc[num++] = 'q';
  abc[num++] = 'r';
  abc[num++] = 's';
  abc[num++] = 't';
  abc[num++] = 'u';
  abc[num++] = 'v';
  abc[num++] = 'w';
  abc[num++] = 'x';
  abc[num++] = 'y';
  abc[num++] = 'z';
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
int scanInt(void ){
  int n ;
  if(std::scanf("%d",&n)){
  }else{
    std::printf("scanN error\n");
    std::exit(1);
  }
  return n ;
}
void scanLlArr(ll *a , int n){
  int ireadA ; 
  for (ireadA =  0 ; ireadA < n ; ireadA++){
    if(std::scanf("%lld",&a[ireadA])){
    }else{
      std::printf("readA error\n");
      std::exit(1);
    }
  }
}

string scanString(void){
  string s ;
  if(cin >> s){ 
  }
  else{
    std::printf("scanString error\n");
    std::exit(1);
  }
  return s;
}

void scanCharArr(char *string){
  if( cin >> string)
  {}
  else{
    std::printf("scanCharStr error\n");
    std::exit(1);
  }
}
/************* print **************/
void printInt(int p){
  if(std::printf("%d\n",p)){
  }else{
    std::printf("intPrintf Error\n");
    std::exit(1);
  }
}

void printChar(char c){
  if(std::printf("%c\n",c)){
  }else{
    std::printf("printChar Error\n");
    std::exit(1);
  }
}

void printLlArr(ll *a){
  int i ;
  for(i = 0 ; i < sizeof(a)/sizeof(ll) ; i++){
    if(std::printf("%lld ",a[i] )){
    }else{
      std::printf("intPrintN Error i = %d stopped \n",i);
      std::exit(1);
    }
  }
  std::printf("\n");
}
void printCharArr(char *string){
  for(int i = 0 ; i < sizeof(string)/sizeof(char); i++){
    if(printf("%c",string[i])){
    }
    else{
      std::printf("charStrPrint Error i = %d stopped \n",i);
      std::exit(1);
    }
  }
  printf("\n");
}
