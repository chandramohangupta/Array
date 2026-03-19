#include <stdio.h>
#include <string.h>
int main()
{
char data[9], received[10];
int i, count = 0, parity;
// Sender Side
printf("Enter 8-bit binary data: ");
scanf("%s", data);
if (strlen(data) != 8)
{
printf("Error: Data must be exactly 8 bits");
return 0;
}
for (i = 0; i < 8; i++)
{
if (data[i] == '1')
count++;
}
parity = count % 2; // Even parity
printf("\n--- Sender Side ---\n");
printf("Data: %s", data);
printf("\nParity Bit: %d", parity);
// Receiver Side
printf("\n\nEnter received data (8 bits + parity bit): ");
scanf("%s", received);
if (strlen(received) != 9)
{
printf("Error: Received data must be 9 bits");
return 0;
}
count = 0;
for (i = 0; i < 9; i++)
{
if (received[i] == '1')
count++;
}
printf("\n--- Receiver Side ---\n");
if (count % 2 == 0)
printf("No Error Detected");
else
printf("Error Detected");
return 0;
}