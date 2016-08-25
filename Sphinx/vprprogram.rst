Using VTR 
=========

"The Verilog-to-Routing (VTR) project is a world-wide collaborative effort to provide a open-source framework for conducting FPGA architecture and CAD research and development. The VTR design flow takes as input a Verilog description of a digital circuit, and a description of the target FPGA architecture." http://vtr.readthedocs.io/en/latest/ "

This tool uses two inputs such as the architecture file and verilog program, at the end of execution it outputs files that can be used to translate how our FPGA should be programmed based on our architecture.

On this link : https://github.com/YangTavares/origin/blob/master/Sphinx/Research/FPGA_project.xml It is possible to see how our architecture is describled in VTR xml based language.

To see the output files desired such as route and place file, go to "vtr_flow" program and run as

.. 	code-block:: c
   	
   	./run_vtr_flow.pl <circuit_file> <architecture_file> -route_file <route_file_name> -place_file <place_file_name> --route_chan_width <int>

If the VTR is giving an error at the end, it is probably the VTR viewer not working propperly. So just change to the "VPR" directory and run it with the files generated at the "temp" directory generated where you ran VTR. To run VPR, you need to put as input the architecture file and a blif file, for example: 

.. 	code-block:: c
   	
	./vpr ../vtr_flow/arch/timing/FPGA_project.xml ../../VTR_testFiles/temp/adder_160bits.pre-vpr.blif --route_chan_width 16
