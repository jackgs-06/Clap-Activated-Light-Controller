"# Clap-Activated-Light-Controller" 
This build was based off of the Arduino UNO R3 microcontroller. As such it is very basic and does not use any kind of custom PCB or super complicated parts. There are 4 main components to the build: Microcontroller, Power supply, Microphone, and Relay.

The project went through several waves of development. Starting with basic concept testing, then moving to prototyping the code and hardware, and finally buttoning the device up and installing it permenantly.


Concept testing-
    This is the original proof of concept that utilizes an Arduino Uno R3, sound sensor, 9V Battery, and an LED.
    ## Photos
    ![Setup photo](images/first_concept_circuit_LED.jpg)

Relay Addition-
    Added a relay into the system. The sound sensor signal triggers the microcontroller to signal the relay, which then provides power to the LED. I also added in a dedicated power supply module, so as not to burn up the onboard microcontroller supply.
    ## Photos
    ![Setup photo](images/relay_testing.jpg)

Container Solidworks Model-
    I made a simple box in Solidworks that would be able to house all the components with room for the needed cords, and room for the microphone.
    ## Photos
    ![Setup photo](images/solidworks_container.png)

Final Design and Implementation-
    I decided to swap out the Arduino Uno R3 for an Esp32-C3 Supermini. The form factor is much smaller and there is no reason to use the Arduino, with as many features as it has, in this simple of a build.
    ## Videos
    [Watch demo](videos/final_implementation.mp4)