#include <stdio.h>
#include <stdbool.h>

int main() {
    int score[999];
    int input;
    int count=0;
    int A=0,B=0,C=0,D=0,F=0;
    
    while (true) {
        scanf("%d",&input);
        if (input!=-1) {
            score[count]=input;
        } else {
            break;
        }
        count++;
    }
    for (int j=0;j<count;j++){
        if (score[j]>100){
    		printf("error score\n");
    	} else if (score[j]<0) {
    	    printf("error score\n");
    	} else if (score[j]>=85) {
    	    printf("%d(A)\n",score[j]);
    	    A++;
    	} else if (score[j]>=75) {
    	    printf("%d(B)\n",score[j]);
    	    B++;
    	} else if (score[j]>=68) {
    	    printf("%d(C)\n",score[j]);
    	    C++;
    	} else if (score[j]>=60) {
    	    printf("%d(D)\n",score[j]);
    	    D++;
    	} else if (score[j]<60) {
    	    printf("%d(F)\n",score[j]);
    	    F++;
    	} else {
    	    printf("error score");
    	}
    }
    printf("A(%d)\n",A);
    printf("B(%d)\n",B);
    printf("C(%d)\n",C);
    printf("D(%d)\n",D);
    printf("F(%d)\n",F);
    return 0;
}