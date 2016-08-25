16-bit Accumulator
==================

A 16-bit Accumulator is used to interface with the "Write INs" of the SRAM manager, it is going to reduce the Inputs needed to program the SRAM cells at the FPGA. 

.. image:: /Research/FPGAdescription/16accumulator.png

(Schematic taken from Sue)

This piece is made of 16 full-adders and flip-flops, each time the clock rises the input bits are added with the previous value.

.. image:: /Research/FPGAdescription/closer_adder.png

(Schematic taken from Sue)

.. image:: /Research/FPGAdescription/16_inside.png

(Schematic taken from Sue)