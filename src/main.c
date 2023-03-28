#include <msp430.h> 

#include "libs/device/device.h"

int main(void)
{
    // stop watchdog timer
    WDTCTL = WDTPW | WDTHOLD;

    struct device_s *device = device_new();
    device_ctor(device);

    while(1)
    {
        device_update(device);
    }
}
