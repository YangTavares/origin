Write Driver
=====================



To write the propper values on each desired SRAM cell, two tri-state inverters with a inverter coupled on one are used to drive both BIT and BITBAR

.. image:: /Research/FPGAdescription/write_driver.png

(Schematic taken from Sue)

As we have 16 bits to program at each time, its used a series of 16 drivers on each SRAM controller

.. image:: /Research/FPGAdescription/write_enable.png

(Schematic taken from Sue)

It also has a "Write_Enable" for controlling the tri-state buffers, as we will have to program different cells on other Tiles.


