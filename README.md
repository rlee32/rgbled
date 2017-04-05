# rgbled
Code for using an RGB LED with an Arduino

| LED color | Forward Voltage Drop (V) |
| --------- | ------------------------ |
| Red       | 2.0                      |
| Green     | 3.2                      |
| Blue      | 3.2                      |

The Forward Voltage Drop, along with the desired current, can be used to compute the appropriate resistance for each color.
Subtract the forward voltage from the applied voltage (in the Arduino setup, 5V) to get the voltage drop across the resistor.
Then, divide the resistor voltage drop by the desired current to get the desired resistance.

This code can accommodate a common-anode or common-cathode RGB LED. The example code given deomnstrates usage of a common-anode LED, which means that the +5V goes to one pin (and the three color pins go to ground). In a common-cathode RGB LED, the converse is true: ground at one pin, +5V at the other three color pins.



