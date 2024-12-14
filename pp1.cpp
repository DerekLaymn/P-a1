 #include <iostream>

 using namespace std; 
 
/* int sumOfDigits(int n,int r){
   
   int product2 =0;
   int product1=0;
   for ( int i = n ; n-r<=i;i--){
     product1 = product1*i; 
   }
   for ( int  i = 1; n-r>=i; i++){
    product2 = product2*i;
   }
   int  nCr = product1/product2;
   cout << product1;
   cout <<  product2;
  
   cout << nCr;
  return 0;
 }
 */
 int main() {
  int n = 4;
  int r = 3;
   int product2 =0;
   int product1=0;
   for ( int i = n ; n-r<=i;i--){
     product1 = product1*i; 
   }
   for ( int  j = 1; n-r>=j; j++){
    product2 = product2*j;
   }
   int  nCr = product1/product2;
   cout << product1;
   cout <<  product2;
  
   cout << nCr;
  return 0;
  
    }


   
    
  