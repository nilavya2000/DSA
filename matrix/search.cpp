#include <iostream>
using namespace std;

#define R 3
#define C 6
int srch(int a[R][C], int key){
   int r=R;
   int i=0, j=C-1;

   while(i<r && j<=0)
   {
      if(a[i][j] == key)
         return true;

      while(a[i][j] < key){
         if(i+1 < r)
            i++;
         else
            return false;
      }

      while(a[i][j] > key){
         if(j-1 >=0)
         j--;
         else
            return false;
      }

   }
   return 0;
}

int main(){
   int a[R][C] = {
      {1,2,3,4,5,6},
      {7,8,9,10,11,12},
      {13,14,15,16,17,18}
   };

   int present = srch(a, 1);

   (present == true) ? cout<<"Present" : cout<<"NOPE \n";
   return 0;
}