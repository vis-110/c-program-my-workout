    #include<stdio.h>
    int main(){
        int i,j,fInput,sInput,c,d,HCF,LCM;
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
                            HCF=c;
                            i=0;
                        }
                    }
                }
            }
        }
        LCM=(fInput*sInput)/HCF; 
        printf("The LCM of %d and %d is : %d",fInput,sInput,LCM);
        return 0;
    }

        // First input : 15
        // Second input : 20
        // The LCM of 15 and 20 is : 60