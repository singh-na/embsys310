### Using the telegraph example, and the challenges listed in the module as reference, and describe another device that you would like to discuss. Describe how you think its embedded system works, and what design challenges it presents.

#####For the purpose of this exercise, I would like to discuss **laptop docking station**.

The main purpose of the dock is to aggregate multiple peripheral, in order to communicate with the laptop and provide power to the laptop. The dock has different types of I/O (HDMI, display port, VGA, Ethernet, USB, USB-C), where it must be able to communicate both ways with laptop and both ways with peripheral devices.

Initially the embedded system in the dock must identify and initialize the type of inputs connected to the dock. Then it must communicate with the laptop to send information of the connected devices and what type of connector is being used by the connected peripheral. When the laptop sends serial data packets to the dock, then the dock identifies the type of request and responds accordingly. For example, the laptop wants to send data to the connected external monitor, the dock identifies the request and routs the data to the monitor. If the laptop request is to read data from the USB, the dock must identify the type of USB and the version of USB, then route data to the laptop.

######Docking Station Challenges:

- Docking stations must be robust and should be able to handle high throughput and response within milliseconds.
- It will be challenge to keep the price low since, docking station requires up-to-data; multiple I/O's (which could require licensing fees) and speeds up to 1 Gbps.
- Testing scope will be limited and impossible to complete, since the user may use display adapters, Ethernet to USB adapter, wifi adaptor, etc., as the possibilities are limitless.
- Not able to debug since the docking station embedded hardware doesn't have any debug ports. If certain connected peripheral doesn't work, then good luck. Sometimes, it will even be connected to the laptop but won't work.
- Since most of the modern docks have Ethernet port and usually connected to the internet. The embedded device could have a vulnerability, which could be exposed to get access of the data on the laptop.
- Peripherals support is a big challenge as the market is flooded with all sorts of devices.