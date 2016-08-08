Level Shifter
===================

The level shifter is a important circuit that raises up the main voltage, since we are using only a pass transistor to control the flow of the Mux, it is needed to raise the voltage of the gate so the transitor can output the high signal with full power.

.. image:: /Research/FPGAdescription/level_shifter.png

(Schematic taken from Sue)

It is important that the pull down transistors are larger than normal because since the pmos transistors are cross-coupled, they will have more power at the circuit.

This schematic configuration was taken from the paper http://rgjournals.com/index.php/ijse/article/viewFile/430/214

After some tests and simulations with the presented circuit, we have compared the output voltage, the rise time, and the standby current as shown on the following images:

.. image:: /Research/FPGAdescription/gate_boost.png

.. image:: /Research/FPGAdescription/stand_current.png

Observing the graphic, the VDDH voltage for the FPGA chosen is 1.8V.





