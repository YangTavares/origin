Write Operation
===================

To Write a value on a SRAM cell at a specific location, the Word from the desired place must be enabled, and then the value to be written must also be chosen. It is important that the value chosen to be written must be extended after the Decoder is disabled, so the SRAM cell wont get a random value at the end.

.. image:: /Research/FPGAdescription/write_op.png

(Simulation taken from EzWave)

It is being written a logical 1 at the selected "WORD" on the Tile, the "WORD" drives 16 bits of information.





