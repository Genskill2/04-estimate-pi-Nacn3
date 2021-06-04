#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);

int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
  
  
  
 float wallis_pi(int n)
 {
    float n=1.0000;
    for (int j=1; j<=i; j++)
    {
        n=n*(4*j*j)/((4*j*j)-1);
    }
   n=2*n;
   return n;
 }
  
  float mc_pi(int i)
  {
     int c= 0;
     for (int i=0; i<a; ++i)
     {
       float x=frandom();
       float y=frandom();
       if((x*x + y*y) <=1)
         c+=1;
     }
     c=c*4;
    return (float)c /i;
}
  

