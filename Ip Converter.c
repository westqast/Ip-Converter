#include <stdio.h>
#include <math.h>

/* Function to convert binary to decimal */
int binary_to_decimal(int n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        /* Get the remainder when n is divided by 10 */
        rem = n % 10;
        /* Divide n by 10 */
        n /= 10;
        /* Add the remainder multiplied by 2^i to the decimal */
        dec += rem * pow(2, i);
        /* Increment i */
        ++i;
    }
    /* Return the decimal */
    return dec;
}

/* Function to convert decimal to binary */
void decimal_to_binary(int decimal) {
int i, binary[9];
/* Set all elements of binary array to 0 */
for (i = 0; i < 9; i++) {
binary[i] = '0';
}
/* Convert decimal to binary */
for (i = 0; decimal > 0; i++) {
    binary[i] = decimal % 2 + '0';
    decimal /= 2;
}

/* Fill remaining elements of binary array with 0 */
for (; i < 8; i++) {
    binary[i] = '0';
}

/* Print binary array in reverse order */
for (i = 7; i >= 0; i--) {
    printf("%c", binary[i]);
}
}

int main() {
    printf("***************************************************************************\n");
    printf("*                       Created by:                                       *\n");
    printf("*                                                                         *\n");
    printf("*                                Tri-P Link                               *\n");
    printf("*                                                                         *\n");
    printf("*                                                                         *\n");
    printf("***************************************************************************\n");
char choice;
int a, b, c, d;
/* Ask user to enter choice */
printf("Enter 'a' to convert from decimal to binary or 'b' to convert from binary to decimal: ");
scanf(" %c", &choice);
/* If user enters 'a', convert decimal IP address to binary */
if (choice == 'a') {
    char ip[32];
    /* Ask user to enter IP address */
    printf("Enter an IP address: ");
    scanf("%s", ip);
    /* Check if the IP address is valid */
        if (sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d) != 4) {
        printf("Invalid IP address\n");
    return 0;
    }
        /* Check if the octets of IP address are within the range of 0 to 255 */
        if (a > 255 || b > 255 || c > 255 || d > 255) {
        printf("Invalid IP address\n");
        return 0;
    }
    /* Print the binary representation of the IP address */
    printf("The binary representation of the IP address is: ");
    decimal_to_binary(a);
    printf(".");
    decimal_to_binary(b);
    printf(".");
    decimal_to_binary(c);
    printf(".");
    decimal_to_binary(d);
    printf("\n");
}
/* If user enters 'b', convert binary IP address to decimal */
/* Ask user to enter the octets of IP address in binary */
else if (choice == 'b') {
    // Input for the first octet of the IP address in binary
    printf("Enter the first octet of the IP address in binary: ");
    scanf("%d", &a);
    // Input for the second octet of the IP address in binary
    printf("Enter the second octet of the IP address in binary: ");
    scanf("%d", &b);
    // Input for the third octet of the IP address in binary
    printf("Enter the third octet of the IP address in binary: ");
    scanf("%d", &c);
    // Input for the fourth octet of the IP address in binary
    printf("Enter the fourth octet of the IP address in binary: ");
    scanf("%d", &d);
    
    // Convert each of the binary octets to decimal
    int decA = binary_to_decimal(a);
    int decB = binary_to_decimal(b);
    int decC = binary_to_decimal(c);
    int decD = binary_to_decimal(d);
    
    // Print the IP address in decimal format
    printf("The IP address in decimal format is: %d.%d.%d.%d\n", decA, decB, decC, decD);
   } else {
        printf("Invalid choice\n");
        return 0;
    }
    return 0;
}
