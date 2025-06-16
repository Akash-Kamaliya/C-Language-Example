/*Write following programs in C.
We have two special characters:
The first character can be represented by one bit 0.
The second character can be represented by two bits (10 or 11).
Given a binary array bits that ends with 0, return true if the last character must be a one-bit
character.
Example 1:
Input: bits = [1,0,0]
Output: true
Explanation: The only way to decode it is two-bit character and one-bit character.
So the last character is one-bit character.*/
#include <stdio.h>
int isOneBitCharacter(int *bits, int bitsSize);
int main()
{
    int bits[] = {1, 1, 1};
    int bitsSize = sizeof(bits) / sizeof(bits[0]);
    if (isOneBitCharacter(bits, bitsSize))
    {
        printf("Output: true\n");
    }
    else
    {
        printf("Output: false\n");
    }
    return 0;
}
int isOneBitCharacter(int *bits, int bitsSize)
{
    int i = 0;
    while (i < bitsSize - 1)
    {
        if (bits[i] == 1)
        {
            i += 2;
        }
        else
        {
            i++;
        }
    }
    return bits[i] == 0 ? 1 : 0;
}