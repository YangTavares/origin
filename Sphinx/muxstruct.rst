LUT Mux
===================

The mux configuration structure for the LUT is created using tri-state-inverters for the first stage and then pass transistors for the last 3 stages, at the end there is a inverter to reverse the tri-state-inverter output 

.. image:: /Research/FPGAdescription/tri_stage.png

(Schematic taken from Sue)

.. image:: /Research/FPGAdescription/mux_stage.png

(Schematic taken from Sue)

Since the pass transistor outputs a weak logical 1, it is used level shifters to boots the gate voltages and enhance the Mux properties, for each stage there is input drivers to manage each stage and output the propper value.

.. image:: /Research/FPGAdescription/input_driver.png

(Schematic taken from Sue)

.. image:: /Research/FPGAdescription/mux_inside.png

(Schematic taken from Sue)







