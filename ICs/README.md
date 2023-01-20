# Integrated Circuits (IC's)
  This will serve as documentation and, a quick lookup for myself of IC's that i've investigated.  Adding other series as I investigate new circuits.

## Report/Output Style

### IC's Logic Description, DataSheet, Wiring, Code, Usage Example, Materials and Notes
- Description - from TI techsheet
- Datasheet - link to TI techsheet
- Wiring - some description of the used wiring, incluing Arduino, input/output pins, and IC connecting pins.
- Simple Test Code - some simple testcode to check wiring.
- Images/Info - outputs of the test coding
- Materials - base list of components used.
- Notes - any comparrisons or observations.
- Project Links

## [74HCXX Series](74HCXXX_Series.md)

I bought an 'assortment' of ICs, and thought i'd see if i could find out what they did, their tech details, put some simple coding together, and a few other things, in an attempt to become 'quickly' familiar with reading tech docs, wiring, testing, and documenting, etc.  I will eventually go further and test their described characteristics with the help of an osilloscope.

### 74HCXXX Series Links
-[74HC02 High Speed CMOS Logic Quad 2-Input NOR Gates](74HCXXX_Series.md#74HC02-High-Speed-CMOS-Logic-Quad-2-Input-NOR-Gates) *Complete  
-[74HC04 High Speed CMOS Logic Hex Inverters](74HCXXX_Series.md#74HC04-High-Speed-CMOS-Logic-Hex-Inverters) *Complete  
-[74HC05 Hex Inverters With Open-Drain Outputs](74HCXXX_Series.md#74HC05-Hex-Inverters-With-Open-Drain-Outputs) *Complete  
-[74HC08 High Speed CMOS Logic Quad 2-Input AND Gates](74HCXXX_Series.md#74HC08-High-Speed-CMOS-Logic-Quad-2-Input-AND-Gates) *Complete  
-[74HC10 Triple 3-Input Positive-NAND Gates](74HCXXX_Series.md#74HC10-Triple-3-Input-Positive-NAND-Gates) *Complete  
-[74HC14 Hex Schmitt-Trigger Inverters](74HCXXX_Series.md#74HC14-Hex-Schmitt-Trigger-Inverters) *Complete  
-[74HC21 Dual 4-Input Positive-AND Gates](74HCXXX_Series.md#74HC21-Dual-4-Input-Positive-AND-Gates) *Complete  
-[74HC30 High Speed CMOS Logic 8-Input NAND Gate](74HCXXX_Series.md#74HC30-High-Speed-CMOS-Logic-8-Input-NAND-Gate) *Complete  
-[74HC32 Quadruple 2-Input Positive-OR Gates](74HCXXX_Series.md#74HC32-Quadruple-2-Input-Positive-OR-Gates) *Complete  
-[74HC74 Dual D-Type Positive-Edge-Triggered Flip-Flops With Clear and Preset](74HCXXX_Series.md#74HC74-Dual-D-Type-Positive-Edge-Triggered-Flip-Flops-With-Clear-and-Preset) *Complete  
-[74HC125 High Speed CMOS Logic Quad Buffers with 3-State Outputs](74HCXXX_Series.md#74HC125-High-Speed-CMOS-Logic-Quad-Buffers-with-3-State-Outputs) *Complete  
-[74HC126 High Speed CMOS Logic Quad Buffers with 3-State Outputs](74HCXXX_Series.md#74HC126-High-Speed-CMOS-Logic-Quad-Buffers-with-3-State-Outputs) *Complete  
-[74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates](74HCXXX_Series.md#74hc132-high-speed-cmos-logic-quad-2-input-schmitt-triggered-nand-gates) * Complete  
-[74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting/Non-Inverting](74HCXXX_Series.md#74hc138-high-speed-cmos-logic-3-to-8-line-decoder-demultiplexer-inverting-non-inverting) *mostly Complete  
-[74HC139 High Speed CMOS Logic Dual 2-to-4 Line Decoders/Demultiplexers](74HCXXX_Series.md#74HC139-High-Speed-CMOS-Logic-Dual-2-to-4-Line-Decoders/Demultiplexers) *Complete  
-[74HC157 High Speed CMOS Logic Quad 2-Input Multiplexers](74HCXXX_Series.md#74HC157-High-Speed-CMOS-Logic-Quad-2-Input-Multiplexers) *Complete  
-[74HC163 High Speed CMOS Logic 4-Bit Binary Counter with Synchronous Reset](74HCXXX_Series.md#74HC163-High-Speed-CMOS-Logic-4-Bit-Binary-Counter-with-Synchronous-Reset) * Complete  
-[74HC164 High Speed CMOS Logic 8-Bit Serial-In/Parallel-Out Shift Register](74HCXXX_Series.md#74hc164-high-speed-cmos-logic-8-bit-serial-in-parallel-out-shift-register) *Complete  
-[74HC165 High Speed CMOS Logic 8-Bit Parallel-In/Serial-Out Shift Register](74HCXXX_Series.md#74hc165-high-speed-cmos-logic-8-bit-parallel-in-serial-out-shift-register) *Complete  
-[74HC174 High Speed CMOS Logic Hex D-Type Flip-Flops with Reset](74HCXXX_Series.md#74HC174-High-Speed-CMOS-Logic-Hex-D-Type-Flip-Flops-with-Reset) *Complete  
-[74HC244 High Speed CMOS Logic Non-Inverting Octal Buffers/Line Drivers with 3-State Outputs](74HCXXX_Series.md#74HC244-High-Speed-CMOS-Logic-Non-Inverting-Octal-Buffers-Line-Drivers-with-3-State-Outputs) *Complete  
-[74HC245 High Speed CMOS Logic Non-Inverting Octal-Bus Transceivers with 3-State Outputs](74HCXXX_Series.md#74HC245-High-Speed-CMOS-Logic-Non-Inverting-Octal-Bus-Transceivers-with-3-State-Outputs) *Complete  
-[74HC273 High Speed CMOS Logic Octal D-Type Flip-Flops with Reset](74HCXXX_Series.md#74HC273-High-Speed-CMOS-Logic-Octal-D-Type-Flip-Flops-with-Reset) *Complete   
-[74HC373 High Speed CMOS Logic Octal Transparent Latches with 3-State Outputs](74HCXXX_Series.md#74HC373-High-Speed-CMOS-Logic-Octal-Transparent-Latches-with-3-State-Outputs) *Complete   
-[74HC374 High Speed CMOS Logic Octal Positive-Edge-Triggered D-Type Flip-Flops with 3-State Outputs](74HCXXX_Series.md#74HC374-High-Speed-CMOS-Logic-Octal-Positive-Edge-Triggered-D-Type-Flip-Flops-with-3-State-Outputs)  
-[74HC393 High Speed CMOS Logic Dual 4-Stage Binary Counters](74HCXXX_Series.md#74HC393-High-Speed-CMOS-Logic-Dual-4-Stage-Binary-Counters)  
-[74HC573 High Speed CMOS Logic Octal Transparent Latches with 3-State Outputs](74HCXXX_Series.md#74HC573-High-Speed-CMOS-Logic-Octal-Transparent-Latches-with-3-State-Outputs)  
-[74HC574 High Speed CMOS Logic Octal Positive-Edge-Triggered D-Type Flip-Flops with 3-State Outputs](74HCXXX_Series.md#74HC574-High-Speed-CMOS-Logic-Octal-Positive-Edge-Triggered-D-Type-Flip-Flops-with-3-State-Outputs)  
-[74HC595 8 Bit Shift Register With 3 State Output Registers](74HCXXX_Series.md#74hc595-8-bit-shift-register-with-3-state-output-registers) *Partial

### CD40XX Series Links
-[CD4001 CMOS Quad 2 Input NOR Gates](CD4000_Series.md#CD4001-Quad-2-input-Nor-Gates) *Complete
-[CD4011 CMOS Quad 2 Input NAND Gates](https://www.ti.com/lit/ds/symlink/cd4011b-mil.pdf) *Complete
-[CD4013 CMOS Dual D-Type Flip-Flop](https://www.ti.com/lit/ds/symlink/cd4013b-mil.pdf) *Uncomplete
-[CD4017 CMOS Decade Counter with 10 Decoded Outputs](https://www.ti.com/lit/ds/symlink/cd4017b-mil.pdf) *Uncomplete
-[CD4021 8-Stage Static Shift Register](https://www.ti.com/lit/ds/symlink/cd4021b-mil.pdf) *Uncomplete
-[CD4022 CMOS Octal Counter with 8 Decoded Outputs](https://www.ti.com/lit/ds/symlink/cd4022b-mil.pdf) *Uncomplete
-[CD4023 CMOS Triple 3 Input NAND Gates](https://www.ti.com/lit/ds/symlink/cd4023b-mil.pdf) *Uncomplete
-[CD4025 CMOS Triple 3 Input NOR Gates](https://www.ti.com/lit/ds/symlink/cd4025b-mil.pdf) *Uncomplete
-[CD4026 CMOS Decade Counter with 7-Segment Display Outputs and Display Enable](https://www.ti.com/lit/ds/symlink/cd4026b.pdf) *Uncomplete
-[CD4027 CMOS Dual J-K Flip-Flop](https://www.ti.com/lit/ds/symlink/cd4027b.pdf) *Uncomplete
-[CD4046 CMOS Micropower Phase-Locked Loop](https://www.ti.com/lit/ds/symlink/cd4046b.pdf) *Uncomplete
-[CD4049 CMOS Hex Inverting Buffer and Converter](https://www.ti.com/lit/ds/symlink/cd4049ub.pdf) *Uncomplete
-[CD4050 CMOS Hex Noninverting Buffer and Converter](https://www.ti.com/lit/ds/symlink/cd4050b.pdf) *Uncomplete
-[CD4051 CMOS Single 8-Channel Analog Multiplexer/Demultiplexer with Logic-Level Conversion](https://www.ti.com/lit/ds/symlink/cd4051b.pdf) *Uncomplete
-[CD4052 CMOS Single 8-Channel Analog Multiplexer/Demultiplexer with Logic-Level Conversion](https://www.ti.com/lit/ds/symlink/cd4052b.pdf) *Uncomplete
-[CD4053 CMOS Single 8-Channel Analog Multiplexer/Demultiplexer with Logic-Level Conversion](https://www.ti.com/lit/ds/symlink/cd4053b.pdf) *Uncomplete
-[CD4060 CMOS 14-Stage Ripple-Carry Binary Counter/Divider and Oscillator](https://www.ti.com/lit/ds/symlink/cd4060b.pdf) *Uncomplete
-[CD4066 CMOS Quad Bilateral Switch](https://www.ti.com/lit/ds/symlink/cd4066b.pdf) *Uncomplete
-[CD4069 CMOS hex inverter](https://www.ti.com/lit/ds/symlink/cd4069ub.pdf) *Uncomplete
-[CD4070 CMOS Quad Exclusive-OR Gate](https://www.ti.com/lit/ds/symlink/cd4070b.pdf) *Uncomplete
-[CD4071 CMOS Quad 2-Input OR Gate](https://www.ti.com/lit/ds/symlink/cd4071b.pdf) *Uncomplete
-[CD4072 CMOS Dual 4-Input Or Gate](https://www.ti.com/lit/ds/symlink/cd4072b.pdf) *Uncomplete
-[CD4073 CMOS Triple 3-Input And Gate](https://www.ti.com/lit/ds/symlink/cd4073b.pdf) *Uncomplete
-[CD4075 CMOS Triple 3-Input Or Gate](https://www.ti.com/lit/ds/symlink/cd4075b.pdf) *Uncomplete
-[CD4081 CMOS Quad 2-Input And Gate](https://www.ti.com/lit/ds/symlink/cd4081b.pdf) *Uncomplete
-[CD4082 CMOS Dual 4-Input And Gate](https://www.ti.com/lit/ds/symlink/cd4082b.pdf) *Uncomplete
-[CD4093 CMOS Quad 2-Input NAND Schmitt Triggers](https://www.ti.com/lit/ds/symlink/cd4093b.pdf) *Uncomplete
-[CD4094 CMOS 8-Stage Shift-and-Store Bus Register](https://www.ti.com/lit/ds/symlink/cd4094b.pdf) *Uncomplete