#include <iostream>
using namespace std;

#define R 3
#define C 6
// iterative 
void s_traversal(int m, int n , int a[R][C]){
   int k = 0;
   int l = 0; 
   int i;
   // m = last row,   n = last column 
   while(k < m && l<n){
      // left to right
      for(i=l; i<n; i++)
         cout<<a[k][i]<<" ";
      k++;

      // top to bottom 
      for(i=k; i<m; ++i)
         cout<<a[i][n-1]<<" ";
      n--;
      
      //right to left
      if(k < m){
         for(i = n-1; i>= l; --i)
            cout<<a[m-1][i]<<" ";
         m--;
      }
      // bottom to top
      if(l < n){
         for(i = m-1; i>=k; --i)
            cout<<a[i][l]<<" ";
         l++;
      }

   }
}

// recursive 
void spiral(int a[R][C], int k, int l ,int m, int n){
   if( k>=m or l>=n )
      return;
   // left -> right 
   for(int i=k; i<n; i++)
      cout<<a[k][i]<<" ";
   // top -> down 
   for(int i=k+1; i<m; ++i)
      cout<<a[i][n-1]<<" ";
   
   // right -> left
   if((m-1)!= k){
      for(int i = n-2; i>=l; i--)
         cout<<a[m-1][i]<<" ";
   }
   // down -> top
   if((n-1)!= l){
      for(int i= m-2; i> k; i--)
         cout<<a[i][l]<<" ";
   }
   spiral(a, k+1, l+1, m-1,n-1);
}


int main(){
   int a[R][C] = {
      {1,2,3,4,5,6},
      {7,8,9,10,11,12},
      {13,14,15,16,17,18}
   };
   cout<<"iterative \n";
   s_traversal(R, C, a);
   cout<<"\n";
   cout<<"Recursive \n";
   spiral(a, 0,0,R,C);
   cout<<"\n";
   return 0;
}