// tiger16 照明等制御サブ基板
#include "mcc_generated_files/mcc.h"
#include <stdio.h>
#include <string.h>
#include "soft_i2c.h"
#include "lcd_i2c.h"


#define D_PWN 8824
#define D_ON 35294
#define D_OFF 0

char buf[32];
uint16_t pwm1, pwm10 = 0;
uint16_t pwm2, pwm20 = 0;


void main(void)
{
    SYSTEM_Initialize();
    CLRWDT();

    pwm1 = pwm2 = D_OFF;
    PWM1_DutyCycleSet(pwm1);
    PWM2_DutyCycleSet(pwm2);
    PWM1_LoadBufferSet();
    PWM2_LoadBufferSet();
    PWM1_Start();
    PWM2_Start();

    //__delay_ms(100);    
    //LCD_i2c_init(8);

    while(1)
    {
        CLRWDT();
        
        //LCD_i2C_cmd(0x80);
        //sprintf(buf, "%d%d%d", IN_LIGHT_GetValue(), IN_MGUN_GetValue(), IN_BELL_GetValue());
        //LCD_i2C_data(buf);
        //__delay_ms(10);    

        // 前照灯ボッシュライト
        if (IN_LIGHT_GetValue()) {
            LIGHT_SetHigh();
        }
        else {
            LIGHT_SetLow();
        }

        // 機銃
        if (IN_MGUN_GetValue()) {
            // MGUN PWM 通電
            pwm1 = pwm2 = D_PWN;
        }
        else {
            // MGUN OFF
            pwm1 = D_OFF;
            if (IN_BELL_GetValue()) {
                // BELL常時通電
                pwm2 = D_ON;
            }
            else {
                // BELL OFF
                pwm2 = D_OFF;
            }
        }
        if (pwm1 != pwm10) {
            pwm10 = pwm1;
            PWM1_DutyCycleSet(pwm1);
            PWM1_LoadBufferSet();
        }
        if (pwm2 != pwm20) {
            pwm20 = pwm2;
            PWM2_DutyCycleSet(pwm2);
            PWM2_LoadBufferSet();
        }
        __delay_ms(10);    
    }    
}    
    
 
/**
 End of File
*/