#include <stdio.h>

int get_first_two_digits(long long int card_number);
int get_num_digits(long long int card_number);
int calculate_checksum(long long int card_number);

int main(void)
{
    long long int credit_card_number;
    printf("Number: ");
    scanf("%lld", &credit_card_number);
    long long int card_number = credit_card_number;

    // Declare and initialize other variables
    int first_two_digits = get_first_two_digits(card_number);
    int num_digits = get_num_digits(card_number);
    int checksum = calculate_checksum(card_number);

    if ((checksum % 10 == 0) && (num_digits >= 13 && num_digits <= 16))
    {
        if (first_two_digits == 34 || first_two_digits == 37)
        {
            printf("AMEX\n");
        }
        else if (first_two_digits >= 51 && first_two_digits <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if ((first_two_digits / 10) == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}

int get_first_two_digits(long long int card_number)
{
    while (card_number > 99)
    {
        card_number /= 10;
    }
    return (int)card_number;
}

int get_num_digits(long long int card_number)
{
    int count = 0;
    while (card_number != 0)
    {
        card_number /= 10;
        count++;
    }
    return count;
}

int calculate_checksum(long long int card_number)
{
    int sum = 0;
    int digits_sum = 0;
    int not_multiplied = 0;
    int digit_count = 0;

    while (card_number != 0)
    {
        int digit = card_number % 10;
        if (digit_count % 2 == 0)
        {
            not_multiplied += digit;
        }
        else
        {
            int product = digit * 2;
            digits_sum += (product % 10) + (product / 10);
        }
        card_number /= 10;
        digit_count++;
    }

    sum = digits_sum + not_multiplied;
    return sum;
}
