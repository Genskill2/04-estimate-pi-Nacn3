#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float mc_pi(int);

float frandom() {
  long int q = random();
  float ret = (float)q/(float)RAND_MAX;
  return ret;
}

int main(void) {
  float pi0;
  float pi1;
  
  pi0 = mc_pi(25000);
  pi1 = mc_pi(25000);
  printf("%f %f\n", pi0, pi1);
  
  if (pi0 == pi1) {
      printf("Two separate estimates of pi are exactly the same. This is unlikely.\n");
      abort();
    }

  if (fabs(pi0 - pi1) > 0.05) {
      printf("Two separate estimates %f and %f are too different.\n", pi0, pi1);
      abort();
  }

    
 float mc_pi(int a){
    int s1=0;
    float pi;
   for (int i=0; i<a; ++i) {
       float x=frandom();
       float y=frandom();
       float d=x*x + y*y;
       
       if (d<=1)
           s1=s1+1;
      
   }
   pi= (double) (s1*4)/a;
   return pi;
}
