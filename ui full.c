#include<stdio.h>
#include<string.h>

struct Payment {
       int transactionId;
       char name[30];
       float amount;

       int type;

 union {
      char upiId[30];
      char cardNumber[20];
      float cashAmount;
 }payment;
 };

 int main(){
      struct Payment p;

      printf("_______Smart payment wallet_______\n\n");

      printf("Enter Transaction ID :");
      scanf("%d",&p.transactionId);

      printf("Enter Customer name: ");
      scanf("%s",p.name);

      printf("Enter Amount: ");
      scanf("%f",&p.amount);

      printf("\nSelected the payment Method\n");
      printf("1.UPI\n");
      printf("2.Card\n");
      printf("3.Cash\n");

      printf("Enter Choice : ");
      scanf("%d",&p.type);

      switch(p.type){
           case 1:
           printf("Enter UPI ID:");
           scanf("%s",p.payment.upiId);
           break;

           case 2:
           printf("Enter card number:");
           scanf("%s",p.payment.cardNumber);
           break;

           case 3:
           printf("Enter cash Amount : ");
           p.payment.cashAmount = p.amount;
           break;

           default:
           printf("Invalid payment method");
           return 0;
      }

      printf("\n______________PAYMENT RECEIPT______________\n");

      printf("Transaction ID : %d\n",p.transactionId);
      printf("Customer Name : %s\n",p.name);
      printf("Amount : %.2f",p.amount);

      switch(p.type){
            case 1:
            printf("\nPayment Type: UPI\n");
            printf("UPI ID:  %s\n",p.payment.upiId);
            break;

            case 2:
            printf("\nPayment type: CARD\n");
            printf("CARD: %s\n",p.payment.cardNumber);
            break;

            case 3:
            printf("\nPayment type: CASH\n");
            printf("CASH: %.2f\n",p.payment.cashAmount);
            break;
      }
      return 0;
  }