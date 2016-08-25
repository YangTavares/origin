.. CSUEB FPGA documentation master file, created by
   sphinx-quickstart on Mon Jul 18 22:39:32 2016.
   You can adapt this file completely to your liking, but it should at least
   contain the root `toctree` directive.

Welcome to CSUEB FPGA's documentation!
======================================

.. toctree::
   :maxdepth: 2

   intro

SRAM
----

To control several components that are important for the FPGA, we will need SRAM cells.  The sizing of each transistor on the SRAM is very important so it can hold the information and show it when doing common operations. There is a section on the book “CMOS VLSI Design a Circuits and Systems Perspective” which describes the proper sizing of a SRAM cell; it worked well for our simulations. 16 bits will program the SRAM cells on the FPGA each time.

.. toctree::
   :maxdepth: 3

   readwrite




Tile Structure
--------------
   
The basic logic structure of the FPGA called "Control Logic Block" (Referenced here as Tile) can be programmed to be any logic gate or combination of logic gates with N inputs, which can be synchronous or asynchronous and after, many Tiles can be connected to form bigger circuits.

.. toctree::
   :maxdepth: 3

   tile

Interconnection Structure
-------------------------

After creating the Basic Logic Elements, it is needed to connect them together to create larger circuits.

.. toctree::
   :maxdepth: 2

   interconnect



Programming the FPGA
-------------------------

After all the basic structure is completed, it is needed to elaborate a way to program the FPGA so it can be transformed in any desired circuit.

.. toctree::
   :maxdepth: 2

   programming

Future Goals
-------------------------

To finish the FPGA presented on this documentation, it is needed to think about the interface between the output files of the VTR and the FPGA programming bits. After that, test these with the presented schematic and them finish the layout.

It requires much effort to develop and finish an ideal FPGA for testing, until now we have achieved the knowledge presented on this documentation. For future goals, it is needed to explore more efficient architectures to have an impact on modern designs, since it requires a huge team to develop a viable and commercial FPGA, we want to try different things that can expand the mind of the actual designers.

References
-------------------------

"CMOS VLSI Design A Circuits and Systems Perspective" - Neil H. E. Weste, David Money Harris

"Architecture and CAD for Deep-Submicron FPGAS" - Jonathan Rose, Vaughn Betz

"FPGA Architecture: Survey and Challenges" -  I. Kuon, R. Tessier and J. Rose

"SRAM Design - Overview and Memory Cell Division" - Doug Sheppard

http://vtr.readthedocs.io/en/latest/

http://rgjournals.com/index.php/ijse/article/viewFile/430/214
  
Indices and tables
===================

* :ref:`genindex`
* :ref:`modindex`
* :ref:`search`

