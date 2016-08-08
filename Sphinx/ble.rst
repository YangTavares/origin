Block Logic Element
===================

.. image:: /Research/FPGAdescription/LUTwithRegister.png


The figure above shows the BLE schematic, it is a MUX that can choose between the direct output of the LUT or the registered version controlled by a clock; it is useful for creating circuits that can be synchronous or asynchronous.

.. image:: /Research/FPGAdescription/ble.png

(Schematic taken from Sue)

The last image shows 4 LUTS that are connected with 4 flipflops separately, at the end there is a mux for all the components, choosing the output of the LUT or the flip-flop.

.. toctree::
   :maxdepth: 2

   flipflop
   blemux