#include <stdio.h>
#include <string.h>
int binToDec(char b[])
{
int i, val = 0;
for (i = 0; b[i] != '\0'; i++)
val = val * 2 + (b[i] - '0');
return val;
}
void decToBin(int n, char b[])
{
int i;
for (i = 7; i >= 0; i--)
{
b[i] = (n % 2) + '0';
n /= 2;
}
b[8] = '\0';
}
int main()
{
int n, i, sum = 0, checksum, rsum;
char data[10][9], checksum_bin[9], receiver_bin[9];
printf("Enter number of frames: ");
scanf("%d", &n);
printf("Enter 8-bit binary data:\n");
for (i = 0; i < n; i++)
{
scanf("%s", data[i]);
sum += binToDec(data[i]);
}
// Sender side
checksum = (~sum) & 0xFF;
decToBin(checksum, checksum_bin);
printf("\n--- Sender Side ---\n");
printf("Checksum (Binary): %s\n", checksum_bin);
// Receiver side
rsum = checksum;
for (i = 0; i < n; i++)
rsum += binToDec(data[i]);
decToBin(rsum & 0xFF, receiver_bin);
printf("\n--- Receiver Side ---\n");
printf("Sum (Data + Checksum): %s\n", receiver_bin);
if ((rsum & 0xFF) == 255)
printf("Result: No Error Detected");
else
printf("Result: Error Detected");
return 0;
}