16-bit Accumulator
==================

A 16-bit Accumulator is used to interface with the "Write INs" of the SRAM manager, it is going to reduce the Inputs needed to program the SRAM cells at the FPGA. Also, it is important to have a way to choose which SRAM cells you want to program per time and how to choose then. At the end, use a software to translate your Verilog program into a Place and Route file that will be transformed into our programming logic for the FPGA.

.. image:: /Research/FPGAdescription/16accumulator.png

(Schematic taken from Sue)

This piece is made of 16 full-adders and flip-flops, each time the clock rises the input bits are added with the previous value.

.. image:: /Research/FPGAdescription/closer_adder.png

(Schematic taken from Sue)

.. image:: /Research/FPGAdescription/16_inside.png

(Schematic taken from Sue)