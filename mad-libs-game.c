#include<stdio.h>
#include<string.h>

int main(){
    char adjective1[30];
    char noun[20];
    char adjective2[30];
    char verb[20];
    char adjective3[30];

    printf("Enter an adjective(description)  : ");
    fgets(adjective1,sizeof(adjective1),stdin);
    adjective1[strlen(adjective1)-1] = '\0';

    printf("Enter the noun (animal or person): ");
    fgets(noun,sizeof(noun),stdin);
    noun[strlen(noun)-1] = '\0';

    printf("Enter an adjective (description) : ");
    fgets(adjective2,sizeof(adjective2),stdin);
    adjective2[strlen(adjective2)-1] = '\0';

    printf("Enter a verb (ending w/ -ing)    : ");
    fgets(verb,sizeof(verb),stdin);
    verb[strlen(verb)-1] = '\0';

    printf("Enter an adjective (description) : ");
    fgets(adjective3,sizeof(adjective3),stdin);
    adjective3[strlen(adjective3)-1] = '\0';

    printf("Today I went to a %s zoo.\n", adjective1);
    printf("In an exhibit, I saw a %s.\n", noun);
    printf("%s was %s and %s!\n", noun,adjective2,verb);
    printf("I was %s!\n", adjective3);


}