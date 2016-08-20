Read Operation
===================

To Read a value from a SRAM cell, it is needed first to pull both BIT and NOTBIT high, and then enable the Sense Amplifiers to output the bit value.

.. image:: /Research/FPGAdescription/read_op.png

(Simulation taken from EzWave)

It the picture above, there is both a write and read operation happening. First, the "WRITE_IN0" is writing a logical 1 at the selected cell when the respective word is enabled. Second, all the bit lines are pulled high with the "PULL_READ" being set to a logical 0, since it is controlled by a pmos. Finally, the "SE" line is enabled with a logical 0 because it is also controlled by a pmos. The sense amplifiers will eventualy measure which BIT or NOTBIT is higher and them amplify it, showing the data in the cell at the line "DATA0".






