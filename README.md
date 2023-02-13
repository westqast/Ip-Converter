                                                              TRI-PLINK

This program was made by our team Tri-PLink.We are software engineer students and this is our project for A semester in C.
We created a program that will take as input an ip to decimal or binary format and will be converted to decimal or binary
respectively.

![222222222222](https://user-images.githubusercontent.com/116835400/218559976-6a440ad0-3917-46a1-9cb0-3c9b37935469.png)

With this project we wanted to be more experienced using:

1-C programming language syntax and structure

2-Functions and how to call them

3-Data types, such as int and char

4-Scanf and printf functions to input and output data

5-Loops, such as while and for loops

6-Basic mathematics, specifically powers and remainders

7-Arrays and how to store and manipulate data in arrays

8-The basic concept of IP addresses and their binary and decimal representations

First we see the menu of this C program where the user is prompted to enter a choice of 'a' or 'b'. If the user enters 'a', the program will ask for an IP address in decimal format, validate its format and range, and then convert it to binary. If the user enters 'b', the program will ask for the octets of an IP address in binary format, validate their range, convert each of the octets from binary to decimal, and then print the IP address in decimal format. The menu is implemented using an if-else statement, and the conversion between decimal and binary is done using two functions, decimal_to_binary() and binary_to_decimal().


![akakkaka](https://user-images.githubusercontent.com/116835400/218562224-5f84be40-8bba-45e4-b0cd-9a52280c2867.png)


The program has two main functions, a)binary to_decimal and b)decimal to_binary.
a)The binary to_decimal function takes a binary number as an argument and returns its decimal equivalent. This is achieved by converting each digit of the binary number to its corresponding power of 2 and summing these values up. The binary number is first divided by 10 to extract its last digit, which is then multiplied by 2^0, since the last digit is the least significant bit. This process is repeated until the entire binary number has been processed.

![THIS](https://user-images.githubusercontent.com/116835400/218558654-aeb70ab8-b595-41b3-915f-21c257f9eb64.png)

b)The decimal to binary function takes a decimal number as an argument and prints its binary equivalent. This is achieved by repeatedly dividing the decimal number by 2 and storing the remainder, which is the next most significant bit of the binary number. The bits are stored in an array and then printed in reverse order, starting from the most significant bit to the least significant bit.

![tha](https://user-images.githubusercontent.com/116835400/218559057-82a5a63f-05fb-4ed3-86e7-0a6a52e8a641.png)


The MAIN function first displays an ASCII art header and then prompts the user to enter either 'a' to convert from decimal to binary or 'b' to convert from binary to decimal. If the user enters 'a', the program asks for an IP address in decimal format, and the IP address is then converted to its binary equivalent using the decimal_to_binary function. If the user enters 'b', the program asks for each of the four octets of the IP address in binary format, converts each of them to decimal using the binary to decimal function, and then prints the IP address in decimal format. If the user enters an invalid choice, the program prints an error message and terminates.
