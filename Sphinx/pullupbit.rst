Pull up System
===================

At the read operation, both "BIT" and "NOTBIT" must be pulled to a logical 1 so the Sense Amplifier can operate on reading if the SRAM stores a logical 0 or 1. for that, we are using a pmos transistor that is activated when the "Pull_Read" port is activated

.. image:: /Research/FPGAdescription/pull_bit.png

(Schematic taken from Sue)

Because we were having an issue with isolated pmos on the layout, we coupled a nmos transistor with the gate floating so there would be no DRC errors.

.. image:: /Research/FPGAdescription/pull_array.png

(Schematic taken from Sue)

Using 32 of them to raise all the "BIT" and "NOTBIT" lines
