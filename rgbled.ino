#include "Pin.h"
#include "RgbLed.h"

OutputPin red(8);
PowerPin power(9);
OutputPin green(10);
OutputPin blue(11);

RgbLed<PowerPin> led(red, power, green, blue);

void setup()
{
    led.setup();
    Pin::ValidateSingleUsage();
    Component::CheckSetup();
}

void loop()
{
    constexpr int msdelay = 1000;
    led.red();
    delay(msdelay);
    led.green();
    delay(msdelay);
    led.blue();
    delay(msdelay);
    led.yellow();
    delay(msdelay);
    led.cyan();
    delay(msdelay);
    led.magenta();
    delay(msdelay);
    led.white();
    delay(msdelay);
}

