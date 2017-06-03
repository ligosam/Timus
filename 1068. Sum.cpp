#include<bits/stdc++.h>

using namespace std;

int main()
{
  int n = 0;
  while(scanf("%d", &n) == 1){
    int x = n, sum = n;
    do{
      if(x < 1){
        n++;
        sum = sum + n;
      }
      else if(x > 1){
        n--;
        sum = sum + n;
      }
    }while(n != 1);
    
    printf("%d\n", sum);
  }
  
  return 0;
}
