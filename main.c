#include <REGX51.H> // Header for 8051 microcontroller

// UART initialization
void UART_Init(void) {
    SCON = 0x50; // Mode 1: 8-bit UART, enable receiver
    TMOD |= 0x20; // Timer1 mode 2: 8-bit auto-reload
    TH1 = 0xFD; // 9600 baud rate at 11.0592 MHz
    TR1 = 1; // Start Timer1
}

// Send a single character over UART
void UART_TxChar(char ch) {
    SBUF = ch;
    while (TI == 0); // Wait for transmission to complete
    TI = 0;
}

// Send a string over UART
void UART_SendString(char *str) {
    while (*str) {
        UART_TxChar(*str++);
    }
}

void delay_ms(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 1275; j++); // Approx delay for 1 ms
}

void main(void) {
    UART_Init();
    P2 = 0x00; // Set all pins of Port 2 low (LED off)

    while (1) {
        P2 = 0xFF; // Turn LED ON
        UART_SendString("LED ON\r\n");
        delay_ms(1000);

        P2 = 0x00; // Turn LED OFF
        UART_SendString("LED OFF\r\n");
        delay_ms(1000);
    }
}
