#include <stdio.h>
#include <stdlib.h>
int Deposit(int* ,int);
int Withdraw(int* ,int);
int Check_balance(int* ,int);
// #define max_account_size    min_acc_no-max_acc_no
#define accounts_size 10000 //Account Range 220000-230000
int main(){
    int Service_option;
    int Account[accounts_size]={0};//account no's and payments
    int n;
    printf("Enter the account no: ");
    scanf("%d",&n);
    int c=0;
    while(1){
        if(c<3){
            if((n>=220000 && n<=230000)){
                break;
            }
            else{
               printf("Enter the valid account no: ");
               c++; 
               scanf("%d",&n);
            }
        }
        else{ //no of attempts to be attempted
            printf("Max attempts completed: ");
            return 0;
        }
    }
    while(1){
        printf("\nChoose the service: \n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check balance\n");
        printf("4. Exit\n");
        scanf("%d",&Service_option);
        switch(Service_option){
            case 1: Deposit(Account,n);
                    break;
            case 2: Withdraw(Account,n);
                    break;
            case 3: Check_balance(Account,n);
                    break;
            case 4: exit(0);
            default:printf("Enter Valid Service option: "); 
                    break;
        }
    }
}
int Deposit(int *Account,int Acc_no){
    printf("Please enter deposit amount ");
    printf("Enter the denominations: ");
    int depo_amount;
    scanf("%d",&depo_amount);
    Account[Acc_no-220000]+=depo_amount;
    printf("\nAccount Number: %20d\n",Acc_no);
    printf("Rupees%10d added successfully on your account\n");
    Check_balance(Account,Acc_no);
    return 0;
}
int Withdraw(int *Account,int Acc_no){
    printf("Please enter Withdraw amount: ");
    int With_amount;
    scanf("%d",&With_amount);
    if (Account[Acc_no-220000]>With_amount && With_amount>0){
        Account[Acc_no-220000]-=With_amount;
        printf("\nAccount Number: %20d\n",Acc_no);
        printf("Rupees%d  successfully on your account\n");
    }
    else{
        printf("Sorry! Insufficent Bank Balance\n");
    }
    Check_balance(Account,Acc_no);
    return 0;
}
int Check_balance(int *Account,int Acc_no){
    printf("Account _number : %d\t Balance: %d",Acc_no, Account[Acc_no-220000]);
    return 0;
}