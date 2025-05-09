/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F1575
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LIGHT aliases
#define LIGHT_TRIS                 TRISAbits.TRISA0
#define LIGHT_LAT                  LATAbits.LATA0
#define LIGHT_PORT                 PORTAbits.RA0
#define LIGHT_WPU                  WPUAbits.WPUA0
#define LIGHT_OD                   ODCONAbits.ODA0
#define LIGHT_ANS                  ANSELAbits.ANSA0
#define LIGHT_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LIGHT_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LIGHT_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LIGHT_GetValue()           PORTAbits.RA0
#define LIGHT_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LIGHT_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LIGHT_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LIGHT_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LIGHT_SetPushPull()        do { ODCONAbits.ODA0 = 0; } while(0)
#define LIGHT_SetOpenDrain()       do { ODCONAbits.ODA0 = 1; } while(0)
#define LIGHT_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LIGHT_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set PWM1OUT aliases
#define PWM1OUT_TRIS                 TRISAbits.TRISA5
#define PWM1OUT_LAT                  LATAbits.LATA5
#define PWM1OUT_PORT                 PORTAbits.RA5
#define PWM1OUT_WPU                  WPUAbits.WPUA5
#define PWM1OUT_OD                   ODCONAbits.ODA5
#define PWM1OUT_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define PWM1OUT_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define PWM1OUT_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define PWM1OUT_GetValue()           PORTAbits.RA5
#define PWM1OUT_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define PWM1OUT_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define PWM1OUT_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define PWM1OUT_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define PWM1OUT_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define PWM1OUT_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

// get/set IN_MGUN aliases
#define IN_MGUN_TRIS                 TRISCbits.TRISC0
#define IN_MGUN_LAT                  LATCbits.LATC0
#define IN_MGUN_PORT                 PORTCbits.RC0
#define IN_MGUN_WPU                  WPUCbits.WPUC0
#define IN_MGUN_OD                   ODCONCbits.ODC0
#define IN_MGUN_ANS                  ANSELCbits.ANSC0
#define IN_MGUN_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IN_MGUN_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IN_MGUN_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IN_MGUN_GetValue()           PORTCbits.RC0
#define IN_MGUN_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IN_MGUN_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IN_MGUN_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define IN_MGUN_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define IN_MGUN_SetPushPull()        do { ODCONCbits.ODC0 = 0; } while(0)
#define IN_MGUN_SetOpenDrain()       do { ODCONCbits.ODC0 = 1; } while(0)
#define IN_MGUN_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define IN_MGUN_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IN_LIGHT aliases
#define IN_LIGHT_TRIS                 TRISCbits.TRISC1
#define IN_LIGHT_LAT                  LATCbits.LATC1
#define IN_LIGHT_PORT                 PORTCbits.RC1
#define IN_LIGHT_WPU                  WPUCbits.WPUC1
#define IN_LIGHT_OD                   ODCONCbits.ODC1
#define IN_LIGHT_ANS                  ANSELCbits.ANSC1
#define IN_LIGHT_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IN_LIGHT_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IN_LIGHT_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IN_LIGHT_GetValue()           PORTCbits.RC1
#define IN_LIGHT_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IN_LIGHT_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IN_LIGHT_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IN_LIGHT_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IN_LIGHT_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define IN_LIGHT_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define IN_LIGHT_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IN_LIGHT_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set IN_BELL aliases
#define IN_BELL_TRIS                 TRISCbits.TRISC2
#define IN_BELL_LAT                  LATCbits.LATC2
#define IN_BELL_PORT                 PORTCbits.RC2
#define IN_BELL_WPU                  WPUCbits.WPUC2
#define IN_BELL_OD                   ODCONCbits.ODC2
#define IN_BELL_ANS                  ANSELCbits.ANSC2
#define IN_BELL_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define IN_BELL_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define IN_BELL_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define IN_BELL_GetValue()           PORTCbits.RC2
#define IN_BELL_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define IN_BELL_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define IN_BELL_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define IN_BELL_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define IN_BELL_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define IN_BELL_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define IN_BELL_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define IN_BELL_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define RC3_SetPullup()             do { WPUCbits.WPUC3 = 1; } while(0)
#define RC3_ResetPullup()           do { WPUCbits.WPUC3 = 0; } while(0)
#define RC3_SetAnalogMode()         do { ANSELCbits.ANSC3 = 1; } while(0)
#define RC3_SetDigitalMode()        do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set I2C_SDA aliases
#define I2C_SDA_TRIS                 TRISCbits.TRISC4
#define I2C_SDA_LAT                  LATCbits.LATC4
#define I2C_SDA_PORT                 PORTCbits.RC4
#define I2C_SDA_WPU                  WPUCbits.WPUC4
#define I2C_SDA_OD                   ODCONCbits.ODC4
#define I2C_SDA_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define I2C_SDA_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define I2C_SDA_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define I2C_SDA_GetValue()           PORTCbits.RC4
#define I2C_SDA_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define I2C_SDA_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define I2C_SDA_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define I2C_SDA_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define I2C_SDA_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define I2C_SDA_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set I2C_SCL aliases
#define I2C_SCL_TRIS                 TRISCbits.TRISC5
#define I2C_SCL_LAT                  LATCbits.LATC5
#define I2C_SCL_PORT                 PORTCbits.RC5
#define I2C_SCL_WPU                  WPUCbits.WPUC5
#define I2C_SCL_OD                   ODCONCbits.ODC5
#define I2C_SCL_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define I2C_SCL_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define I2C_SCL_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define I2C_SCL_GetValue()           PORTCbits.RC5
#define I2C_SCL_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define I2C_SCL_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define I2C_SCL_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define I2C_SCL_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define I2C_SCL_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define I2C_SCL_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/