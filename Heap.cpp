#include <iostream>
using namespace std;

int count = 10;
int array[10];

int reheapUp(int j){
   int p;
     if(j>0)
      {
        p = (j-1)/2;
        if(array[j] > array[p]){
            int i = array[j];
            array[j] = array[p];
            array[p] = i;
        }

        reheapUp(p);
      }
   }

   void disPlay(){

      for(int i=0 ; i<count ; i++){
        cout<<array[i]<<"  ";
      }
   }



int findMax(){
         int max = array[0];
         for(int i=0 ; i<count ; i++){
               if(max<array[i])
                 max = array[i];
         }
         return max;
}


int findMin(){
         int min = array[0];
         for(int i=0 ; i<count ; i++){
               if(min>array[i])
                 min = array[i];
         }
         return min;
}


int main(){


       int h;
       for(int i=0; i<10 ; i++){
         cin>>h;
         array[i] = h;
         reheapUp(i);
       }



       int max = findMax();
       int min = findMin();
       cout<<"\nMaximun Number : "<<max<<"\nMinimun Number: "<<min;

}
