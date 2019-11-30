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

I bought an 'assortment' of ICs, and though i'd see if i could find out what they did, their tech details, put some simple coding together, and a few other things, in an attempt to become 'quickly' familiar with reading tech docs, wiring, testing, and documenting, etc.

### 74HCXXX Series Links
-[74HC02 High Speed CMOS Logic Quad 2-Input NOR Gates](74HCXXX_Series.md#74HC02-High-Speed-CMOS-Logic-Quad-2-Input-NOR-Gates) *Complete  
-[74HC04 High Speed CMOS Logic Hex Inverters](74HCXXX_Series.md#74HC04-High-Speed-CMOS-Logic-Hex-Inverters)  
-[74HC05 Hex Inverters With Open-Drain Outputs](74HCXXX_Series.md#74HC05-Hex-Inverters-With-Open-Drain-Outputs)  
-[74HC08 High Speed CMOS Logic Quad 2-Input AND Gates](74HCXXX_Series.md#74HC08-High-Speed-CMOS-Logic-Quad-2-Input-AND-Gates) *Complete  
-[74HC10 Triple 3-Input Positive-NAND Gates](74HCXXX_Series.md#74HC10-Triple-3-Input-Positive-NAND-Gates) *Complete  
-[74HC14 Hex Schmitt-Trigger Inverters](74HCXXX_Series.md#74HC14-Hex-Schmitt-Trigger-Inverters)  
-[74HC21 Dual 4-Input Positive-AND Gates](74HCXXX_Series.md#74HC21-Dual-4-Input-Positive-AND-Gates) *Complete  
-[74HC30 High Speed CMOS Logic 8-Input NAND Gate](74HCXXX_Series.md#74HC30-High-Speed-CMOS-Logic-8-Input-NAND-Gate) * Complete  
-[74HC32 Quadruple 2-Input Positive-OR Gates](74HCXXX_Series.md#74HC32-Quadruple-2-Input-Positive-OR-Gates) * Complete  
-[74HC74 Dual D-Type Positive-Edge-Triggered Flip-Flops With Clear and Preset](74HCXXX_Series.md#74HC74-Dual-D-Type-Positive-Edge-Triggered-Flip-Flops-With-Clear-and-Preset)  
-[74HC125 High Speed CMOS Logic Quad Buffers with 3-State Outputs](74HCXXX_Series.md#74HC125-High-Speed-CMOS-Logic-Quad-Buffers-with-3-State-Outputs)  
-[74HC126 High Speed CMOS Logic Quad Buffers with 3-State Outputs](74HCXXX_Series.md#74HC126-High-Speed-CMOS-Logic-Quad-Buffers-with-3-State-Outputs)  
-[74HC132 High Speed CMOS Logic Quad 2-Input Schmitt-Triggered NAND Gates](74HCXXX_Series.md#74hc132-high-speed-cmos-logic-quad-2-input-schmitt-triggered-nand-gates) * Complete  
-[74HC138 High Speed CMOS Logic 3-to-8 Line Decoder Demultiplexer Inverting/Non-Inverting](74HCXXX_Series.md#74hc138-high-speed-cmos-logic-3-to-8-line-decoder-demultiplexer-inverting-non-inverting)  
-[74HC139 High Speed CMOS Logic Dual 2-to-4 Line Decoders/Demultiplexers](74HCXXX_Series.md#74HC139-High-Speed-CMOS-Logic-Dual-2-to-4-Line-Decoders/Demultiplexers)  
-[74HC157 High Speed CMOS Logic Quad 2-Input Multiplexers](74HCXXX_Series.md#74HC157-High-Speed-CMOS-Logic-Quad-2-Input-Multiplexers)  
-[74HC163 High Speed CMOS Logic 4-Bit Binary Counter with Synchronous Reset](74HCXXX_Series.md#74HC163-High-Speed-CMOS-Logic-4-Bit-Binary-Counter-with-Synchronous-Reset)  
-[74HC164 High Speed CMOS Logic 8-Bit Serial-In/Parallel-Out Shift Register](74HCXXX_Series.md#74hc164-high-speed-cmos-logic-8-bit-serial-in-parallel-out-shift-register) *Complete  
-[74HC165 High Speed CMOS Logic 8-Bit Parallel-In/Serial-Out Shift Register](74HCXXX_Series.md#74hc165-high-speed-cmos-logic-8-bit-parallel-in-serial-out-shift-register) *Complete  
-[74HC174 High Speed CMOS Logic Hex D-Type Flip-Flops with Reset](74HCXXX_Series.md#74HC174-High-Speed-CMOS-Logic-Hex-D-Type-Flip-Flops-with-Reset)  
-[74HC244 High Speed CMOS Logic Non-Inverting Octal Buffers/Line Drivers with 3-State Outputs](74HCXXX_Series.md#74HC244-High-Speed-CMOS-Logic-Non-Inverting-Octal-Buffers-Line-Drivers-with-3-State-Outputs)  
-[74HC245 High Speed CMOS Logic Non-Inverting Octal-Bus Transceivers with 3-State Outputs](74HCXXX_Series.md#74HC245-High-Speed-CMOS-Logic-Non-Inverting-Octal-Bus-Transceivers-with-3-State-Outputs)  
-[74HC273 High Speed CMOS Logic Octal D-Type Flip-Flops with Reset](74HCXXX_Series.md#74HC273-High-Speed-CMOS-Logic-Octal-D-Type-Flip-Flops-with-Reset)  
-[74HC373 High Speed CMOS Logic Octal Transparent Latches with 3-State Outputs](74HCXXX_Series.md#74HC373-High-Speed-CMOS-Logic-Octal-Transparent-Latches-with-3-State-Outputs)  
-[74HC374 High Speed CMOS Logic Octal Positive-Edge-Triggered D-Type Flip-Flops with 3-State Outputs](74HCXXX_Series.md#74HC374-High-Speed-CMOS-Logic-Octal-Positive-Edge-Triggered-D-Type-Flip-Flops-with-3-State-Outputs)  
-[74HC393 High Speed CMOS Logic Dual 4-Stage Binary Counters](74HCXXX_Series.md#74HC393-High-Speed-CMOS-Logic-Dual-4-Stage-Binary-Counters)  
-[74HC573 High Speed CMOS Logic Octal Transparent Latches with 3-State Outputs](74HCXXX_Series.md#74HC573-High-Speed-CMOS-Logic-Octal-Transparent-Latches-with-3-State-Outputs)  
-[74HC574 High Speed CMOS Logic Octal Positive-Edge-Triggered D-Type Flip-Flops with 3-State Outputs](74HCXXX_Series.md#74HC574-High-Speed-CMOS-Logic-Octal-Positive-Edge-Triggered-D-Type-Flip-Flops-with-3-State-Outputs)  
-[74HC595 8 Bit Shift Register With 3 State Output Registers](74HCXXX_Series.md#74hc595-8-bit-shift-register-with-3-state-output-registers) *Partial

## Contributing

Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.