# Credit
The Credit project is a program implemented in C that validates credit card numbers based on their structure and the Luhn algorithm. It prompts the user for a credit card number and determines if it is a valid American Express, MasterCard, or Visa card number.

## How it works
The program prompts the user for a credit card number (without hyphens or leading zeroes). It applies the Luhn algorithm to validate the credit card number and performs checks to identify the type of credit card (American Express, MasterCard, Visa). It then displays the result as `AMEX`, `MASTERCARD`, `VISA`, or `INVALID` depending on the validation and card type.

## Technologies Used
- C programming language
- Luhn algorithm

## Getting Started
1. Ensure you have a C compiler installed on your machine.
2. Clone the project repository.
3. Compile the `credit.c` file using the C compiler.
4. Run the compiled executable.
5. Enter a credit card number when prompted.
6. View the result.

## Example Usage
$ ./credit
Number: 4003600000000014
VISA

## License
This project is licensed under the [MIT License](https://opensource.org/licenses/MIT).
