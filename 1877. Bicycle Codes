#include<bits/stdc++.h>

using namespace std;

int main()
{
   int p1 = 0, p2 = 0;
   while(scanf("%d %d", &p1, &p2) != EOF){
     int flag = 0;
     for(int i = 0; i <= 9999; i++){
       if(i % 2 == 0 && p1 == i){
         flag = 1;
       }
       else if(i % 2 != 0 && p2 == i){
         flag = 1;
       }
     }
     if(flag == 1){
       printf("yes\n");
     }
     else{
       printf("no\n");
     }
   }
   
   return 0;
}
