LUT Input Mux
===================

.. image:: /Research/FPGAdescription/lut_input.png

(Schematic taken from Sue)

The LUT Input Mux is used to make a possible connection with all the Tile inputs and outputs, so it will be a fully connected Tile

.. image:: /Research/FPGAdescription/lut_input_inside.png

(Schematic taken from Sue)

Each input of the LUTs has a 14x1 Mux and they are controlled by 14 SRAM cells each

.. image:: /Research/FPGAdescription/sram_level.png

(Schematic taken from Sue)

Each SRAM cell is coupled with a level shifter at the end, so they will control the pass transistors at the Mux

.. image:: /Research/FPGAdescription/mux_input.png

The Mux that drives the input of the LUT consists of only one stage of pass transistors (14 in total), their gates are controlled by the SRAM cells and the inputs come from the inputs and outputs from the Tile.

