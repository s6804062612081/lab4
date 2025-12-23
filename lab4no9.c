#include <stdio.h>
#include <stdbool.h>

int main() {
    int score[999];
    int input;
    int count=0;
    
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
    	} else if (score[j]>=75) {
    	    printf("%d(B)\n",score[j]);
    	} else if (score[j]>=68) {
    	    printf("%d(C)\n",score[j]);
    	} else if (score[j]>=60) {
    	    printf("%d(D)\n",score[j]);
    	} else if (score[j]<60) {
    	    printf("%d(F)\n",score[j]);
    	} else {
    	    printf("error score");
    	}
    }
    return 0;
}