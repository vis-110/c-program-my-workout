    #include<stdio.h>
    int main(){
        int i,j,fInput,sInput,c,d;
        printf("First input : ");
        scanf("%d",&fInput);
        printf("Second input : ");
        scanf("%d",&sInput);
        for(i=fInput;i>0;i--){
            if((fInput%i)==0){
                c=i;
                for(j=sInput;j>0;j--){
                    if((sInput%j)==0){
                        d=j;
                        if(c==d){
                            printf("HCF of %d and %d is : %d\n",fInput,sInput,c);
                            return 0;
                        }
                    }
                }
            }
        }
        return 0;
    }


    First input : 24
    Second input : 36
    HCF of 24 and 36 is : 12