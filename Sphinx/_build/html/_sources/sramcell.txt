SRAM cell schematic
===================

The SRAM cells are capable of storing a bit (0-1) for each cell

.. image:: /Research/FPGAdescription/SRAM_cell.png

(Schematic taken from Sue)

“DATA” represents the bit stored in the SRAM cell on the image above. To change the value of the “DATA”, it is needed to enable the "WORD" line with a logical 1 and drive the "BIT" line with the proper value and the "NOTBIT" line with inverted value, so it will be electrically forced to change.

The sizing of each transistor at the cell is defined by the book "CMOS VLSI Design" which says the pull up, pull down and pass transistors should have 3/3, 8/2, 4/2 of sizing respectively. These sizes are important so the SRAM cell can hold its value when needed, but not being weak when the read operation is being executed.