Sense Amplifier schematic
=========================

.. image:: /Research/FPGAdescription/Sense_amp.png

(Schematic taken from Sue)

The figure shown above is a Sense Amplifier which is used to read the current data stored in the SRAM cell, to do so, both "BIT" and "NOTBIT" needs to be pulled high and them tri-stated, after this the Sense will be enabled to read by pulling the SE down, it will be able to sense which of the bit lines have higher voltage and them amplify it.

.. image:: /Research/FPGAdescription/sense_tri.png

(Schematic taken from Sue)

Outside each Sense Amplifier, there will be a tri-state buffer to control the outputs of each Data, as we want to read different cells on each Tile as we program the FPGA. We have 16 of those combinations as we program 16 bits per time.

.. image:: /Research/FPGAdescription/sense_enable.png

(Schematic taken from Sue)