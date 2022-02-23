#include <iostream>
using namespace std;

int count = 10;
int array[10];
int minarray[10];

int maxreheapUp(int j){
   int p;
     if(j>0)
      {
        p = (j-1)/2;
        if(array[j] > array[p]){
            int i = array[j];
            array[j] = array[p];
            array[p] = i;
        }

        maxreheapUp(p);
      }
   }

   int minreheapUp(int j){
   int p;
     if(j>0)
      {
        p = (j-1)/2;
        if(minarray[j] < minarray[p]){
            int i = minarray[j];
            minarray[j] = minarray[p];
            minarray[p] = i;
        }

        minreheapUp(p);
      }
   }

   void disPlayMaxheap(){

      for(int i=0 ; i<count ; i++){
        cout<<array[i]<<"  ";
      }
   }

   void disPlayMinheap(){

      for(int i=0 ; i<10 ; i++){
        cout<<minarray[i]<<"  ";
      }
   }


int reheapDown(int p , int l){
      int lc = (2*p)+1;
      int rc = (2*p)+2;
      int c;
      if(lc<=l-1 || rc<=l-1){

        if(array[rc] > array[lc])
            c = rc;
        else
             c = lc;
        if(array[c] > array[p]){
            int i = array[c];
            array[c] = array[p];
            array[p] = i;
            reheapDown(c,l);
        }

      }
      return 0;
   }
   void deleteMax(){
      array[0] = array[count-1];
      count--;
      reheapDown(0,count);

}



int main(){


       int h;
       for(int i=0; i<10 ; i++){
         cin>>h;
         array[i] = h;
         maxreheapUp(i);
       }

       cout<<"\nMax Heap: ";
       disPlayMaxheap();
       for(int i=0; i<10 ; i++){

         minarray[i] = array[0];



         minreheapUp(i);

         deleteMax();

       }

       cout<<"\nMin Heap: ";
       disPlayMinheap();
}

