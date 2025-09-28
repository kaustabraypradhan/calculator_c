#include<stdio.h>
#include<math.h>

//simple calculator

int main() {
    char ch1='n';
    do{
        char b;
        printf("Enter which operator to be used.\n(+)---->Addition\n(-)---->Subtraction\n");
        printf("(*)---->Multiplication\n(/)---->Division \n(e)---->Power function\n");
        printf("(s)---->Sq root\n(c)---->Cube root\n");
        scanf(" %c",&b);
        
        switch(b){
            case '+' : {float sum=0,s;char ch;
                        for(;;){
                            printf("Enter a number: ");
                            scanf("%f",&s);
                            sum+=s;
                            printf("want to enter more numbers? [y/n]: ");
                            scanf(" %c",&ch);
                            if(ch=='n'||ch=='N'){
                                break;
                            }
                        }
                        printf("Sum = %f\n",sum);
                        break;}

            case '-' : {float sub=0,s1=0;char ch;
                        printf("Enter a number: ");
                        scanf("%f",&sub);
                        for(;;){
                            printf("Enter a number: ");
                            scanf("%f",&s1);
                            sub-=s1;
                            printf("want to enter more numbers? [y/n]: ");
                            scanf(" %c",&ch);
                            if(ch=='n'||ch=='N'){
                                break;
                            }
                        }
                        printf("Subtraction = %f\n",sub);
                        break;}

            case '*' : {float mult=1,m;char ch;
                        for(;;){
                            printf("Enter a number: ");
                            scanf("%f",&m);
                            mult*=m;
                            printf("want to enter more numbers? [y/n]: ");
                            scanf(" %c",&ch);
                            if(ch=='n'||ch=='N'){
                                break;
                            }
                        }
                        printf("Multiplication = %f\n",mult);
                        break;}

            case '/' : {float div=0,d=1;char ch;
                        printf("Enter a number: ");
                        scanf("%f",&div);
                        for(;;){
                            printf("Enter a number: ");
                            scanf("%f",&d);
                            if(d==0){
                                printf("You can't enter ZERO as divisor while division!\n");
                                continue;
                            }
                            div/=d;
                            printf("want to enter more numbers? [y/n]: ");
                            scanf(" %c",&ch);
                            if(ch=='n'||ch=='N'){
                                break;
                            }
                        }
                        printf("Division = %f\n",div);
                        break;}

            case 's' : {
                        float n,r;
                        printf("Enter number : ");
                        scanf("%f",&n);
                        printf("Result : %f",pow(n,0.5));
                        break;}

            case 'c' : {
                        float n,r;
                        printf("Enter number : ");
                        scanf("%f",&n);
                        printf("Result : %f",pow(n,0.333333));
                        break;}

            case 'e' : {
                        char conf;double ans,base,power;int P=1; 
                        while(P==1){
                        printf("Enter Base : ");
                        scanf("%lf",&base );
                        printf("Enter Power : ");
                        scanf("%lf",&power);
                        ans = pow(base,power);
                        printf("Result : %lf\n",ans);
                        printf("\nWant calculate more? [y/n] : ");
                        scanf(" %c",&conf);
                        if(conf=='n'||conf=='N'){
                            P=0;
                        }
                        }
                        break;
            }

            default : printf("No operations selected\n");
        }

        printf("\nDo you want to close the calculator? [y/n]: ");
        scanf(" %c",&ch1);
    }
    
    while(ch1=='n'||ch1=='N');

    return 0;
}
