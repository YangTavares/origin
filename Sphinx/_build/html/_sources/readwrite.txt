Managing SRAM on FPGA
=====================

.. image:: /Research/FPGAdescription/programSRAMs.png

To program the SRAM cells on the tile, there will be a decoder choosing each single array of 16 cells per time, it is needed to manage the operations properly so the data on the cells will be written when needed. Each time you use one device on the figure, its needed to enable it and disable all others except the Decoder enable, it is only needed to disable the Decoder when the Address needs to be changed. 

.. toctree::
   :maxdepth: 2

   sramcell
   senseamp
   writedrive
   pullupbit
   decodersystem
   writeoperation
   readoperation

.. image:: /Research/FPGAdescription/SRAM_outside.png

(Block vision taken from Sue)

.. image:: /Research/FPGAdescription/SRAM_inside.png

(Inside the SRAM manager block)


