#include "msp430g2553.h"
void main(void)
{
WDTCTL = WDTPW + WDTHOLD;                                                      //Stop Watchdog
P1DIR |= (BIT0 | BIT6);                                                        //Set P1.0 and P1.6 to outputs
BCSCTL1 = CALBC1_1MHZ;                                                         //Set DCO to 1MHz
DCOCTL = CALDCO_1MHZ;
P1SEL = BIT1 + BIT2;                                                           //Set P1.1 and P1.2 to RX to TX
P1SEL2 = BIT1 + BIT2;
UCA0CTL1 |= UCSSEL_2;                                                          //SMCLK
UCA0BR0 = 104;                                                                 //9600
UCA0BR1 = 0;                                                                   //9600
UCA0MCTL = UCBRS_1;                                                            //Modulation
UCA0CTL1 &= ~UCSWRST; //Start USCI
IE2 |= UCA0RXIE; //Enable RX interrupt
__bis_SR_register(CPUOFF + GIE);                                              //Enter LPM0 with interrupts
while(1)
{
}
}
#pragma vector=USCIAB0RX_VECTOR
__interrupt void USCI0RX_ISR(void)
//__interrupt(USCIAB0RX_VECTOR) USCI0RX_ISR(void)
{
//while(!(UCA0RXIFG))
//{
if(UCA0RXBUF == 65)                                                         //Toggle red LED if "A"
RXed
{
P1OUT ^= BIT0;
}
if(UCA0RXBUF == 66)                                                        //Toggle green LED if "B"
RXed
{
P1OUT ^= BIT6;
}
}
