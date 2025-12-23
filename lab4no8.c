#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int score[n];
    for (int i=0;i<n;i++){
        scanf("%d",&score[i]);
    }
    for (int j=0;j<n;j++){
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