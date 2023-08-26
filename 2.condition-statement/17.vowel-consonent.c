    
    //Write a C program to check whether an alphabet is a vowel or a consonant. 
    
    #include <stdio.h>
    int main(){
        char input;
        printf("Enter characters in lowercase\n");
        scanf("%c",&input);
        switch(input){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            printf("The Alphabets is a vowel\n");
            break;
            default:
            printf("The Alphabets is a consonent\n");
        }
        return 0;
    }

    // Enter characters in lowercase
    // e
    // The Alphabets is a vowel
    // PS F:\start-c-program\2.condition-statement> ./output  
    // Enter characters in lowercase
    // z
    // The Alphabets is a consonent